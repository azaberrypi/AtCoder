#include <iostream>

int main(void) {
    int a, b, c, d;
    int sum, sum1;

    std::cin >> a >> b >> c >> d;
    sum = a * b;
    sum1 = c * d;

    if (sum >= sum1) {
        std::cout << sum << std::endl;
    } else if (sum < sum1) {
        std::cout << sum1 << std::endl;
    }

    return 0;
}