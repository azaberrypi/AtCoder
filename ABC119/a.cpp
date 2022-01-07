#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    if (s[5] == '1') {
        std::cout << "TBD" << std::endl;
    } else if (int(s[6]) <= int('4')) {
        std::cout << "Heisei" << std::endl;
    } else {
        std::cout << "TBD" << std::endl;
    }

    return 0;
}