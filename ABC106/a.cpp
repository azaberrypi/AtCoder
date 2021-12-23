#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    int road = a + b - 1;

    std::cout << a * b - road;
    return 0;
}
