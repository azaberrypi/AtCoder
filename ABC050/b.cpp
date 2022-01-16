#include <iostream>

int main(void) {
    int n, m, p, x;
    int t[100];
    int sum = 0;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> t[i];
        sum += t[i];
    }

    std::cin >> m;

    for (int i = 0; i < m; i++) {
        std::cin >> p >> x;
        std::cout << sum - t[p - 1] + x << std::endl;
    }

    return 0;
}