#include <iostream>
#include <string>

int main(void) {
    std::string a, b;
    std::cin >> a >> b;

    if (a[0] == b[2]) {
        if (a[1] == b[1]) {
            if (a[2] == b[0]) {
                std::cout << "YES" << std::endl;
                return 0;
            }
        }
    }
    std::cout << "NO" << std::endl;
    return 0;
}