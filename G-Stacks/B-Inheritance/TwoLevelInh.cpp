#include <iostream>
#include <fstream>

int main() {
    std::cout << std::boolalpha;

    std::cout << "istream derives from basic_ios<char>: "
              << std::is_base_of<std::basic_ios<char>, std::istream>::value
              << "\n";

    std::cout << "ifstream derives from istream: "
              << std::is_base_of<std::istream, std::ifstream>::value
              << "\n";

    return 0;
}