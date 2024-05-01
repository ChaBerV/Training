#include<stdio.h>
#include<string.h>

int main() {
    char s[101], x[101];
    scanf("%s", s);
    scanf("%s", x);
    int n = strlen(s);
    
    for(int i = 0; i < n; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
        if(x[i] >= 'A' && x[i] <= 'Z') {
            x[i] += 32;
        }
    }
    
    int result = strcmp(s, x);
    if(result < 0) {
        printf("-1\n");
    } else if(result > 0) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    
    return 0;
}

