#include <iostream>

int main() {

    int a, b, x;
    std::cin >> a >> b >> x;

    if (a == x || (a < x && (a + b) >= x)) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

    return 0;
}