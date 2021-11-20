#include <iostream>

int main() {
    int n, a, b;
    std::cin >> n >> a >> b;

    int sum = n * a;
    if (sum >= b) {
        std::cout << b << std::endl;
    } else {
        std::cout << sum << std::endl;
    }

    return 0;
}