#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {
    std::string fileName = ".m";
    bool nameFlag = true;
    for (int i = 0; i < argc; ++i) {
        if (argv[i][0] == '-') {
            continue;
        } else {
            fileName = argv[i];
            nameFlag = false;
        }
    }
    if (nameFlag) {
        return -1;
    }
    std::ifstream finpt(fileName);
    for (int i = 0; i < argc; ++i) {
        if (argv[i][0] == '-') {
            for (int j = 0; j < sizeof(argv[i]) / sizeof(argv[i][0]); ++j) {
                if (argv[i][j] == 'l') {
                    size_t lines = 0;
                    while (!finpt.eof()) {
                        if (finpt.get() == '\n') {
                            lines++;
                        }
                    }
                    std::cout << lines;
                }
                if (argv[i][j] == 'w') {
                    size_t words = 1;
                    while (!finpt.eof()) {
                        char ch = finpt.get();
                        if (ch == ' ') {
                            words++;
                        }
                    }
                    std::cout << words;
                }
                if (argv[i][j] == 'b') {
            }
        }
    }
    return 0;

