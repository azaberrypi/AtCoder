#include <iostream>
#include <string>

int main(){
    int alphabet[26] = {0};
    std::string w;
    std::cin >> w;

    int length = w.length();

    for(int i = 0; i < length; i++) {
        alphabet[int(w[i]) - 97]++;
    }

    for(int i = 0; i < 26; i++) {
        if(alphabet[i] % 2 != 0) {
            std::cout << "No\n";
            return 0;
        }
    }
    std::cout << "Yes\n";

    return 0;
}
