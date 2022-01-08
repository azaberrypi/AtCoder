#include <iostream>
#include <string>

int main() {
    std::string sa, sb, sc;
    std::cin >> sa >> sb >> sc;
    int index_sa, index_sb, index_sc;
    index_sa = index_sb = index_sc = 0;
    char next;

    next = sa.at(index_sa++);

    while (1) {
        if (next == 'a') {
            if (sa.size() == index_sa) {
                std::cout << "A\n";
                return 0;
            }
            next = sa.at(index_sa);
            index_sa++;
        } else if (next == 'b') {
            if (sb.size() == index_sb) {
                std::cout << "B\n";
                return 0;
            }
            next = sb.at(index_sb);
            index_sb++;
        } else {
            if (sc.size() == index_sc) {
                std::cout << "C\n";
                return 0;
            }
            next = sc.at(index_sc);
            index_sc++;
        }
    }
}