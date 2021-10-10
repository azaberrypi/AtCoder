#include <stdio.h>
typedef long long int llint;

llint hoge(llint num, int k) {
    llint result = 1;
    for (int i = 0; i < k; i++) {
        result = result * num;
    }
    return result;
}

llint converter_to_decimal(llint num, int k) {
    llint result = 0;
    for (int i = 0;; i++) {
        if(num == 0) {
            return result;
        }
        result += (num % 10) * hoge(k, i);
        num /= 10;
    }
}

int main(void) {
    int k;
    llint a, b;
    scanf("%d %lld %lld", &k, &a, &b);

    printf("%lld\n", converter_to_decimal(a, k) * converter_to_decimal(b, k));

    return 0;
}