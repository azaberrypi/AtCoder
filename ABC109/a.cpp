#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    if (a * b % 2 != 0) {
        std::cout << "Yes\n";
    } else {
        std::cout << "No\n";
    }

    return 0;
}
