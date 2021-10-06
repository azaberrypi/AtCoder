#include <iostream>

int main(void) {
    int a, b;
    std::cin >> a >> b;
    if (a == b) {
        std::cout << "Draw" << std::endl;
    } else if (a > b && b != 1 || a < b && a == 1) {
        std::cout << "Alice" << std::endl;
    } else {
        std::cout << "Bob" << std::endl;
    }

    return 0;
}