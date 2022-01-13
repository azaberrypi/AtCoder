#include <iostream>

int main(void) {
    int w, h, n;
    std::cin >> w >> h >> n;
    int x_origin, y_origin;
    x_origin = y_origin = 0;

    int x[100], y[100], a[100];

    for (int i = 0; i < n; i++) {
        std::cin >> x[i] >> y[i] >> a[i];
        if (a[i] == 1) {
            if (w <= x[i]) {
                std::cout << 0 << std::endl;
                return 0;
            } else if (x_origin < x[i]) {
                x_origin = x[i];
            }
        } else if (a[i] == 2) {
            if (x_origin >= x[i]) {
                std::cout << 0 << std::endl;
                return 0;
            } else if (w > x[i]) {
                w = x[i];
            }
        } else if (a[i] == 3) {
            if (h <= y[i]) {
                std::cout << 0 << std::endl;
                return 0;
            } else if (y_origin < y[i]) {
                y_origin = y[i];
            }
        } else if (a[i] == 4) {
            if (y_origin >= y[i]) {
                std::cout << 0 << std::endl;
                return 0;
            } else if (h > y[i]) {
                h = y[i];
            }
        }
    }

    std::cout << (w - x_origin) * (h - y_origin) << std::endl;
    return 0;
}