#include <iostream>

int main() {
    int a[3];
    int five, seven;
    five = seven = 0;

    std::cin >> a[0] >> a[1] >> a[2];

    for (int i = 0; i < 3; i++) {
        if(a[i] == 5) {
            five++;
        } else if (a[i] == 7) {
            seven++;
        }
    }

    if((five == 2) && (seven == 1)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}