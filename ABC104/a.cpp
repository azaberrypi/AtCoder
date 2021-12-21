#include <iostream>

int main() {
    int r;
    std::cin >> r;

    if (r < 1200) {
        std::cout << "ABC\n";
    } else if (r < 2800) {
        std::cout << "ARC\n";
    } else {
        std::cout << "AGC\n";
    }
    return 0;
}
