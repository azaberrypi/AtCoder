#include <iostream>

int main() {
    char x, y;
    std::cin >> x >> y;
    int a = int(x);
    int b = int(y);

    if (a == b) {
        std::cout << '=' << std::endl;
    } else if (a > b) {
        std::cout << '>' << std::endl;
    } else if (a < b) {
        std::cout << '<' << std::endl;
    }
    return 0;
}
