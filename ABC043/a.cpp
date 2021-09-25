#include <iostream>

int main() {
    int N;

    std::cin >> N;

    int sum = 0;
    for (int a = 1; a < N + 1; a++) {
        sum += a;
    }

    std::cout << sum << std::endl;

    return 0;
}