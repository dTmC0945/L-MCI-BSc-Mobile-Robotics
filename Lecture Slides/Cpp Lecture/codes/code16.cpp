
int main() {    // calculate and print a table of squares 0-99:
    int i = 0;
    while (i < 100) {
        cout << i << '\t' << square(i) << '\n';
        ++i; // increment i
    }
}