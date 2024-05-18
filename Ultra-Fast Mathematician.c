#include<stdio.h>
#include<string.h>

int main(){
	char s[101], p[101], r[101];
	scanf("%s", s);
	scanf("%s", p);
	int n = strlen(s);
	for(int i=0; i<n; i++){
		if(s[i] == p[i]){
			r[i] = '0';
		}else{
			r[i] = '1';
		}
	}
	r[n] = '\0';
	printf("%s", r);
}
