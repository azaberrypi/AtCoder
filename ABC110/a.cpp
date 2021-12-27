#include <iostream>

int main() {
    int a[3];
    int max = 1;
    int index_max;

    for (int i = 0; i < 3; i++) {
        std::cin >> a[i];
        if (max < a[i]) {
            index_max = i;
            max = a[i];
        }
    }

    int pocket_money = 0;

    for (int i = 0; i < 3; i++) {
        if (i == index_max) {
            pocket_money += a[i] * 10;
        } else {
            pocket_money += a[i];
        }
    }

    std::cout << pocket_money << std::endl;

    return 0;
}
