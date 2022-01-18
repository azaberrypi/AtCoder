#include <iostream>
#include <string>

int main(void) {
    int n;
    std::string s;

    std::cin >> n;
    std::cin >> s;

    int x = 0;
    int x_max = x;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'I') {
            x++;
            if (x > x_max) {
                x_max = x;
            }
        } else {
            x--;
        }
    }

    std::cout << x_max << std::endl;

    return 0;
}