#include <iostream>

int main(void) {

    int a, b;
    std::cin >> a >> b;

    int result = (a + b) % 24;
    std::cout << result << std::endl;

    return 0;
}