#include <iostream>

int main(void) {
    int x;
    std::cin >> x;

    if(x < 1200) {
        std::cout << "ABC" << std::endl;
    } else if (x >= 1200) {
        std::cout << "ARC" << std::endl;
    }

    return 0;
}