#include <iostream>

int main() {
    int N, K, X, Y;
    int sum = 0;

    std::cin >> N >> K >> X >> Y;

    for(int cnt = 1; cnt < N+1; cnt++) {
        if(cnt < K+1) {
            sum += X;
        } else {
            sum += Y;
        }
    }

    std::cout << sum << std::endl;
    return 0;
}