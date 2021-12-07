#include <iostream>

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    int sum = 0;

    if (a > b) {
        sum += b;
    } else {
        sum += a;
    }

    if (c > d) {
        sum += d;
    } else {
        sum += c;
    }

    std::cout << sum << "\n";
    return 0;
}