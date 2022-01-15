#include <iostream>

int main(void) {
    int h, w;
    std::cin >> h >> w;
    char c[101][101] = {};

    for (int counter_h = 1; counter_h < h + 1; counter_h++) {
        for (int counter_w = 0; counter_w < w; counter_w++) {
            std::cin >> c[counter_h][counter_w];
        }
    }

    for (int counter_h = 1; counter_h < 2 * h + 1; counter_h++) {
        for (int counter_w = 0; counter_w < w; counter_w++) {
            std::cout << c[(counter_h + 1) / 2][counter_w];
        }
        std::cout << std::endl;
    }

    return 0;
}