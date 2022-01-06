#include <iostream>
#include <string>

int main() {
    std::string sa, sb, sc;
    std::cin >> sa >> sb >> sc;
    int index_sa, index_sb, index_sc;
    index_sa = index_sb = index_sc = 0;
    int flag_a, flag_b, flag_c;
    flag_a = 1;
    flag_b = flag_c = 0;

    while (1) {
        if (sa[index_sa] == '\0' && flag_a == 1) {
            std::cout << 'A' << std::endl;
            return 0;
        } else if (sa[index_sa] == 'a' && flag_a == 1) {
            index_sa++;
        } else if (sa[index_sa] == 'b' && flag_a == 1) {
            index_sa++;
            flag_a = 0;
            flag_b = 1;
        } else if (sa[index_sa] == 'c' && flag_a == 1) {
            index_sa++;
            flag_a = 0;
            flag_c = 1;
        }

        if (sb[index_sb] == '\0' && flag_b == 1) {
            std::cout << 'B' << std::endl;
            return 0;
        } else if (sb[index_sb] == 'a' && flag_b == 1) {
            index_sb++;
            flag_b = 0;
            flag_a = 1;
        } else if (sb[index_sb] == 'b' && flag_b == 1) {
            index_sb++;
        } else if (sb[index_sb] == 'c' && flag_b == 1) {
            index_sb++;
            flag_b = 0;
            flag_c = 1;
        }

        if (sc[index_sc] == '\0' && flag_c == 1) {
            std::cout << 'C' << std::endl;
            return 0;
        } else if (sc[index_sc] == 'a' && flag_c == 1) {
            index_sc++;
            flag_c = 0;
            flag_a = 1;
        } else if (sc[index_sc] == 'b' && flag_c == 1) {
            index_sc++;
            flag_c = 0;
            flag_b = 1;
        } else if (sc[index_sc] == 'c' && flag_c == 1) {
            index_sc++;
        }
    }
}