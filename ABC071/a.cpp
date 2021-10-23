#include <iostream>

int main(void) {
    int x, a, b;
    std::cin >> x >> a >> b;
    int distance_a, distance_b;

    distance_a = (x - a) * (x - a);
    distance_b = (x - b) * (x - b);

    if (distance_a < distance_b) {
        std::cout << "A" << std::endl;
    } else {
        std::cout << "B" << std::endl;
    }

    return 0;
}