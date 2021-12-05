#include <iostream>
#include <string>

int main() {
    std::string c, result;

    std::cin >> c;
    int i = 0;
    int j = 0;
    while (c[i] != '\0') {
        if (c[i] == '0' || c[i] == '1') {
            result[j++] = c[i];
        } else {
            if (j != 0) {
                result[--j] = '\0';
            }
        }
        i++;
    }
    result[j] = '\0';

    for (int i = 0; i < j; i++) {
        std::cout << result[i];
    }
    std::cout << "\n";

    return 0;
}