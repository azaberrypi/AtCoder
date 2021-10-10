#include <stdio.h>

int main(void) {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    for(int i = a; i < b+1; i++) {
        if(i % c == 0) {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("%d\n", -1);

    return 0;
}