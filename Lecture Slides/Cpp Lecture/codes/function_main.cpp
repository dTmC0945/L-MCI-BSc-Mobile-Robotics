int main(int argc, char *argv[])

int main(int num_args, char** arg_strings)

#include <iostream>

int main(int argc, char** argv) {
    std::cout << "Have " << argc << " arguments:\n";
    for (int i = 0; i < argc; ++i) {
        std::cout << argv[i] << "\n";
    }
}

Have 4 arguments:
./test
A
B
C