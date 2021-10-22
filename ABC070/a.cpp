#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int n_head, n_rear;
    n_head = n / 100;
    n_rear = n % 10;

    if (n_head == n_rear) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}