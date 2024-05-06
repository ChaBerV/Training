#include<stdio.h>

int main(){
	int n, c = 0;
	char s[51];
	scanf("%d", &n);
	scanf("%s", s);
	for(int i=1; i<n; i++){
		if(s[i] == s[i-1]){
			c++;
		}
	}
	printf("%d", c);
}
