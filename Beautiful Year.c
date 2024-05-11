#include <stdio.h>
#include <stdbool.h>

bool hasDistinctDigits(int year) {
    bool digits[10] = {false};
    while (year > 0) {
        int digit = year % 10;
        if (digits[digit]) {
            return false; 
        }
        digits[digit] = true;
        year /= 10;
    }
    return true; 
}

int main() {
    int y;
    scanf("%d", &y);

    for (int year = y + 1; ; year++) {
        if (hasDistinctDigits(year)) {
            printf("%d", year); 
            break;
        }
    }

    return 0;
}

