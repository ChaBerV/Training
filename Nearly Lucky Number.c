#include <stdio.h>

// Function to check if a number is lucky
int isLucky(int num) {
    // Check if num is a lucky number (contains only 4 and 7)
    if (num == 4 || num == 7) {
        return 1;
    }
    return 0;
}

// Function to count the number of lucky digits in a number
int countLuckyDigits(long long n) {
    int count = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit == 4 || digit == 7) {
            count++;
        }
        n /= 10;
    }
    return count;
}

int main() {
    long long n;
    scanf("%lld", &n);

    // Count the number of lucky digits in n
    int luckyCount = countLuckyDigits(n);

    // Check if the count of lucky digits is a lucky number
    if (isLucky(luckyCount)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

