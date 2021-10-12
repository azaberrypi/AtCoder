#include <iostream>
#include <string>

int main(void) {
    std::string a, b, c;
    std::cin >> a >> b >> c;

    int size_a = a.size();
    int size_b = b.size();

    if(a[size_a-1] == b[0]) {
        if(b[size_b-1] == c[0]) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}