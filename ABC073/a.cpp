#include <iostream>

int main(void) {
    int n;
    std::cin >> n;
    if (n % 10 == 9) {
        std::cout << "Yes" << std::endl;
    } else if (n / 10 == 9) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}