#include <iostream>

int main() {
    int x;
    std::cin >> x;

    if (x == 3 || x == 5 || x == 7) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
    return 0;
}
