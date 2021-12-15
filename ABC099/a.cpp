#include <iostream>

int main() {

    int n;
    std::cin >> n;

    if (n <= 999) {
        std::cout << "ABC\n";
    } else {
        std::cout << "ABD\n";
    }

    return 0;
}
