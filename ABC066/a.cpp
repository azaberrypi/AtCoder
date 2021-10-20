#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    int temp;
    int min[3] = {a, b, c};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (min[j] > min[j + 1]) {
                temp = min[j + 1];
                min[j + 1] = min[j];
                min[j] = temp;
            }
        }
    }
    std::cout << min[0] + min[1] << std::endl;
    return 0;
}

