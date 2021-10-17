#include <iostream>

int main(void) {
    int x, a, b;
    std::cin >> x >> a >> b;

    if (a - b >= 0) {
        std::cout << "delicious" << std::endl;
    } else if (b - a < x + 1) {
        std::cout << "safe" << std::endl;
    } else {
        std::cout << "dangerous" << std::endl;
    }

    return 0;
}