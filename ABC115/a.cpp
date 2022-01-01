#include <iostream>

int main() {
    int d;
    std::cin >> d;

    std::cout << "Christmas";

    for (; d <= 24; d++) {
        std::cout << " Eve";
    }
    std::cout << std::endl;

    return 0;
}
