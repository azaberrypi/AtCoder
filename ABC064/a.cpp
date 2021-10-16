#include <iostream>

int main(void) {
    int r, g, b;
    std::cin >> r >> g >> b;

    int temp = g * 10 + b;

    if (temp % 4 == 0) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}