#include <iostream>

int main() {

    int a, b;
    std::cin >> a >> b;

    int add, sub, mul;
    add = a + b;
    sub = a - b;
    mul = a * b;
    int result = 0;

    if (add >= sub && add >= mul) {
        result = add;
    } else if (sub >= add && sub >= mul) {
        result = sub;
    } else {
        result = mul;
    }

    std::cout << result << "\n";

    return 0;
}
