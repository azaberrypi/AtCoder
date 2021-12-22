#include <iostream>

int main() {
    int n, k;
    std::cin >> n >> k;
    int surplus = n % k;

    if (surplus == 0) {
        std::cout << 0;
    } else {
        std::cout << 1;
    }
    return 0;
}
