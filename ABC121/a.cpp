#include <iostream>

int main(void) {
    int h, w, h1, w1;
    std::cin >> h >> w >> h1 >> w1;

    std::cout << (h - h1) * (w - w1) << std::endl;

    return 0;
}