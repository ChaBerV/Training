#include <stdio.h>

long long function(long long n) {
    if (n % 2 == 0) {
        return n / 2;
    } else {
        return -((n + 1) / 2);
    }
}

int main() {
    long long n;
    scanf("%lld", &n);
    printf("%lld", function(n));
    return 0;
}

