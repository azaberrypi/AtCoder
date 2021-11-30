#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    int L, N;
    std::cin >> N >> L;
    std::vector<std::string> s(N);
    for (int i = 0; i < N; i++) {
        std::cin >> s[i];
    }

    std::sort(s.begin(), s.end());

    for (int i = 0; i < N; i++) {
        std::cout << s[i];
    }
    std::cout << std::endl;

    return 0;
}