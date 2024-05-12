#include <stdio.h>
#include <string.h>

int main() {
    int n, t;
    scanf("%d %d", &n, &t);

    char s[51];
    scanf("%s", s);

    // Iterate through the queue for t seconds
    for (int sec = 0; sec < t; sec++) {
        // Perform swaps between adjacent boys and girls
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                // Swap positions i and i+1
                char temp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = temp;
                // Move to the next position
                i++;
            }
        }
    }

    // Print the final arrangement
    printf("%s\n", s);

    return 0;
}

