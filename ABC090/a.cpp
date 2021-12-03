#include <iostream>

int main() {
    char c;
    for (int i = 0; i < 9; i++) {
        std::cin >> c;
        if (i == 0 || i == 4 || i == 8) {
            std::cout << c;
        }
    }
    std::cout << std::endl;
    return 0;
}