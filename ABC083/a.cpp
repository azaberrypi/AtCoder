#include <iostream>

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    int left = a + b;
    int right = c + d;

    if (left > right) {
        std::cout << "Left" << std::endl;
    } else if (left < right) {
        std::cout << "Right" << std::endl;
    } else {
        std::cout << "Balanced" << std::endl;
    }
    return 0;
}