#include <iostream>

int main(void) {
    int k, s;
    std::cin >> k >> s;

    int counter = 0;
    int z;

    for (int x = 0; x <= k; x++) {
        for (int y = 0; y <= k; y++) {
            z = s - x - y;
            if (0 <= z and z <= k) {
                counter += 1;
            }
        }
    }

    std::cout << counter << std::endl;

    return 0;
}