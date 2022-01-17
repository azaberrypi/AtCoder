#include <iostream>

int main(void) {
    int k, s;
    std::cin >> k >> s;

    int counter = 0;

    if (k * 3 < s) {
        std::cout << 0 << std::endl;
        return 0;
    }

    int x, y, z;
    int y_loop_counter;
    int even_flag;
    for (x = k;; x--) {
        even_flag = 0;
        y = s - x;
        if (y > x && y != (2 * x)) {
            break;
        } else if (y == 2 * x || x == 2 * y) {
            std::cout << counter + 1 << std::endl;
            return 0;
        }
        y_loop_counter = 0;
        for (;; y--) {
            z = s - x - y;
            if (z > y) {
                break;
            }
            if (z == y || y == x) {
                even_flag = 1;
            }
            y_loop_counter++;
        }

        if (even_flag == 1 && y_loop_counter != 0) {
            counter += (y_loop_counter * 6 - 3);
        } else if (even_flag == 0 && y_loop_counter != 0) {
            counter += (y_loop_counter * 6);
        }

    }

    std::cout << counter << std::endl;

    return 0;
}