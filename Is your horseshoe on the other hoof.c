#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main() {
    int s1, s2, s3, s4;
    
    // Read the four integers representing the colors of the horseshoes
    scanf("%d %d %d %d", &s1, &s2, &s3, &s4);
    
    // Initialize an array to store the colors
    int colors[4] = {s1, s2, s3, s4};
    
    // Sort the colors array
    qsort(colors, 4, sizeof(int), (int (*)(const void *, const void *))strcmp);

    // Determine the number of unique colors
    int unique_count = 1; // Start with 1 because the first element is always unique
    for (int i = 1; i < 4; i++) {
        if (colors[i] != colors[i - 1]) {
            unique_count++;
        }
    }
    
    // Calculate the number of horseshoes Valera needs to buy
    int horseshoes_to_buy = 4 - unique_count;
    
    // Print the result
    printf("%d\n", horseshoes_to_buy);
    
    return 0;
}

