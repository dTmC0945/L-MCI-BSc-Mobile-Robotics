#include <cstdio>
#include <cstdlib>
#include <unistd.h>
#include <sys/wait.h>

void graceful(int signum) {
    printf("\tChild confirming received signal: %i\n", signum);
    puts("\tChild about to terminate gracefully...");
    sleep(1);
    puts("\tChild terminating now...");
    _exit(0); /* fast-track notification of parent */}

void set_handler() {
    struct sigaction current;
    sigemptyset(&current.sa_mask);         /* clear the signal set */
    current.sa_flags = 0;                  /* enables sa_handler, not sa_action */
    current.sa_handler = graceful;         /* specify a handler */
    sigaction(SIGTERM, &current, nullptr);    /* register the handler */}

void child_code() {
    set_handler();

    while (true) {   /** loop until interrupted **/
        sleep(1);
        puts("\tChild just woke up, but going back to sleep.");
    }
}

void parent_code(pid_t cpid) {
    puts("Parent sleeping for a time...");
    sleep(5);

    /* Try to terminate child. */
    if (-1 == kill(cpid, SIGTERM)) {
        perror("kill");
        exit(-1);
    }
    wait(nullptr); /** wait for child to terminate **/
    puts("My child terminated, about to exit myself...");
}

int main() {
    pid_t pid = fork();
    if (pid < 0) {
        perror("fork");
        return -1; /* error */}
    if (0 == pid)
        child_code();
    else
        parent_code(pid);
    return 0;  /* normal */
}