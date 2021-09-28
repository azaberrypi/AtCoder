#include <iostream>

int main(void) {
    int a,b,c;
    std::cin >> a >> b >> c;

    if(a == b && b == c) {
        std::cout << 1 << std::endl;
    } else if((a == b && b != c) || (a != b && b == c) || (c == a && a != b)) {
        std::cout << 2 << std::endl;
    } else {
        std::cout << 3 << std::endl;
    }

    return 0;
}