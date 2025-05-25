#include <iostream>
#include <string>

void Mimic() {
    std::string input;
    do {
        std::getline(std::cin, input);
        std::cout << input << std::endl;
    } while (input != "end");
}
