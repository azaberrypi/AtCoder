#include <iostream>

int main() {
    int x, a, b;
    std::cin >> x >> a >> b;

    x -= a;
    int temp = x / b;
    x -= temp * b;

    std::cout << x << std::endl;

    return 0;
}