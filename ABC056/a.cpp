#include <iostream>

int main(void) {

    char a, b;
    std::cin >> a >> b;

    if (a == 'H') {
       if (b == 'H') {
           std::cout << 'H' << std::endl;
       } else {
           std::cout << 'D' << std::endl;
       }
    } else {
        if (b == 'H') {
            std::cout << 'D' << std::endl;
        } else {
            std::cout << 'H' << std::endl;
        }
    }

    return 0;

}