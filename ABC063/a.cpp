#include <iostream>

int main(void) {
    int a, b;
    std::cin >> a >> b;

    int sum = a + b;
    if ( sum >= 10 ) {
        std::cout << "error" << std::endl;
    } else {
        std::cout << sum << std::endl;
    }
    return 0;
}