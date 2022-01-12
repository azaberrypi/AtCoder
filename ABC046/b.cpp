#include <iostream>
#include <cmath>

int main(void) {
    int n, k;
    std::cin >> n >> k;

    long long int answer = k * std::pow(k - 1, n - 1);

    std::cout << answer << std::endl;

    return 0;
}