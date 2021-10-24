#include <iostream>

int main(void) {
    int x, t;
    std::cin >> x >> t;
    int ans = x - t;

    if (ans <= 0) {
        std::cout << 0 << std::endl;
    } else {
        std::cout << ans << std::endl;
    }

    return 0;
}