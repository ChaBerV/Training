#include<stdio.h>

int main() {
    int x, c = 0;
    scanf("%d", &x);

    c = x / 5;
    if (x % 5 != 0) {
        c++;
    }

    printf("%d\n", c);

    return 0;
}

