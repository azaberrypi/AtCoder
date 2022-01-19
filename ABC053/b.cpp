#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    auto a_first = s.find_first_of('A');
    auto z_last = s.find_last_of('Z');
    std::cout << (z_last - a_first + 1) << std::endl;
    return 0;
    int a[100000];
    int index_a = 0;
    int z[100000];
    int index_z = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s.at(i) == 'A') {
            a[index_a++] = i;
        } else if (s.at(i) == 'Z') {
            z[index_z++] = i;
        }
    }

    std::cout << z[index_z - 1] - a[0] + 1 << std::endl;
}
