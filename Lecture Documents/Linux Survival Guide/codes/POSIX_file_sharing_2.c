#include <cstdio>
#include <cstdlib>
#include <fcntl.h>
#include <unistd.h>

#define FileName "data.dat"

void report_and_exit(const char *msg) {
    perror(msg);
    exit(-1); /* EXIT_FAILURE */}

int main() {
    struct flock lock;
    lock.l_type = F_WRLCK;    /* read/write (exclusive) lock */
    lock.l_whence = SEEK_SET; /* base for seek offsets */
    lock.l_start = 0;         /* 1st byte in file */
    lock.l_len = 0;           /* 0 here means 'until EOF' */
    lock.l_pid = getpid();    /* process id */
    int fd; /* file descriptor to identify a file within a process */
    if ((fd = open(FileName, O_RDONLY)) < 0)  /* -1 signals an error */
        report_and_exit("open to read failed...");
    /* If the file is write-locked, we can't continue. */
    fcntl(fd, F_GETLK, &lock); /* sets lock.l_type to F_UNLCK if no write lock */
    if (lock.l_type != F_UNLCK)
        report_and_exit("file is still write locked...");
    lock.l_type = F_RDLCK; /* prevents any writing during the reading */
    if (fcntl(fd, F_SETLK, &lock) < 0)
        report_and_exit("can't get a read-only lock...");
    /* Read the bytes (they happen to be ASCII codes) one at a time. */
    int c; /* buffer for read bytes */
    while (read(fd, &c, 1) > 0)    /* 0 signals EOF */
        write(STDOUT_FILENO, &c, 1); /* write one byte to the standard output */
    /* Release the lock explicitly. */
    lock.l_type = F_UNLCK;
    if (fcntl(fd, F_SETLK, &lock) < 0)
        report_and_exit("explicit unlocking failed...");
    close(fd);
    return 0;
}