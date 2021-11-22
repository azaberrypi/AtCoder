#include <iostream>
#include <cmath>

int main() {
    int s;
    std::cin >> s;

    int answer = 0;
    for (int i = 0; i < 3; i++) {
        answer += s % 10;
        s /= 10;
    }

    std::cout << answer << std::endl;

    return 0;
}