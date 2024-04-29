#include<stdio.h>

int main(){
	int x=0, n;
	char s[4];
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%s", s);
		if(!strcmp(s, "X++") || !strcmp(s, "++X")){
			x++;
		} else {
			x--;
		}
	}
	printf("%d", x);
}
