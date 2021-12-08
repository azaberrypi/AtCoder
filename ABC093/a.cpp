#include <iostream>

int main() {
    char i[3];

    for (int cnt = 0; cnt < 3; cnt++) {
        std::cin >> i[cnt];
    }

    int cnt_a = 0;
    int cnt_b = 0;
    int cnt_c = 0;

    for (int cnt = 0; cnt < 3; cnt++) {
        if (i[cnt] == 'a') {
            cnt_a = 1;
        } else if (i[cnt] == 'b') {
            cnt_b = 1;
        } else if (i[cnt] == 'c') {
            cnt_c = 1;
        } else {
            std::cout << "error\n";
        }
    }

    if (cnt_a == 1 && cnt_b == 1 && cnt_c == 1) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}