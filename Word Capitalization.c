#include <stdio.h>
#include <string.h>

int main(){
	char s[1001];
	int n;
	scanf("%s", s);
	n = strlen(s);
	if(s[0] >= 'A' && s[0] <= 'Z'){
		printf("%s", s);
	}else{
		s[0] -= 32;
		printf("%s", s);
	}
}
