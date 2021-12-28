#include <iostream>

int main() {
    char a[3];
    for (int i = 0; i < 3; i++) {
        std::cin >> a[i];
        if (a[i] == '9') {
            a[i] = '1';
        } else if (a[i] == '1') {
            a[i] = '9';
        }
    }

    for (int i = 0; i < 3; i++) {
        std::cout << a[i];
    }
    std::cout << std::endl;
    return 0;
}
