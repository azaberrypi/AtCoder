#include <iostream>

int main() {

    int n;
    std::cin >> n;

    if (n % 2 == 0) {
        std::cout << n << std::endl;
    } else {
        std::cout << 2 * n << std::endl;
    }

    return 0;
}
