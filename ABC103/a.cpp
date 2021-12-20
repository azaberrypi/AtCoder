#include <iostream>
#include <cstdlib>

int main() {

    int a[3];

    for (int i = 0; i < 3; i++) {
        std::cin >> a[i];
    }
    for (int j = 0; j < 2; j++) {
        for (int i = 0; i < 2; i++) {
            if (a[i] > a[i + 1]) {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }

    int sum = abs(a[0] - a[1]) + abs(a[1] - a[2]);

    std::cout << sum << "\n";

    return 0;
}
