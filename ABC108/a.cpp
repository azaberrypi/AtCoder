#include <iostream>

int main() {
    int k;
    std::cin >> k;

    int tmp = k / 2;

    std::cout << tmp * (k - tmp) << std::endl;
    return 0;
}
