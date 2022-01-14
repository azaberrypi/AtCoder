#include <iostream>

int main(void) {
    long long a, b, x;
    std::cin >> a >> b >> x;

    if (a == 0) {
        std::cout << (b / x + 1) << std::endl;
    } else {
        std::cout << (b / x + 1) - ((a - 1) / x + 1) << std::endl;
    }

    return 0;
}