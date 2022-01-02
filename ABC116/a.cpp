#include <iostream>

int main() {
    int a[3];
    std::cin >> a[0];
    int max = a[0];
    int max_num = 0;
    int area = 1;

    for (int i = 1; i < 3; i++) {
        std::cin >> a[i];
        if (max < a[i]) {
            max = a[i];
            max_num = i;
        }
    }

    for (int i = 0; i < 3; i++) {
        if (i != max_num) {
            area *= a[i];
        }
    }

    std::cout << area / 2 << std::endl;
    return 0;
}
