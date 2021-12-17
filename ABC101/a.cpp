#include <iostream>
#include <string>

int main(void) {
    std::string s;
    std::cin >> s;

    int result = 0;

    for (int i = 0; i < 4; i++) {
        if (s[i] == '+') {
            result++;
        } else {
            result--;
        }
    }

    std::cout << result << "\n";

    return 0;
}