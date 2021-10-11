#include <iostream>
#include <string>

int main(void) {
    std::string s1, s2, s3;
    std::cin >> s1 >> s2 >> s3;

    char c1 = s1[0] - 32;
    char c2 = s2[0] - 32;
    char c3 = s3[0] - 32;

    std::cout << c1 << c2 << c3 << std::endl;

    return 0;
}