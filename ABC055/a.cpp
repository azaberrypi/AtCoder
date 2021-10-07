#include <iostream>

int main(void) {
    int n;
    std::cin >> n;

    int x = n * 800;
    int y = n / 15;
    std::cout << x - y * 200 << std::endl;

    return 0;
}