#include<stdio.h>
#include<string.h>

int main(){
	char s[101];
	scanf("%s", s);
	int n = strlen(s), temp;
	int a, b;
	for(int i=0; i<n-2; i+=2){
		for(int j=0; j<n-i-2; j+=2){
			a = s[j] - '0';
			b = s[j+2] - '0';
			if(a > b){
				temp = s[j];
				s[j] = s[j+2];
				s[j+2] = temp; 
			}
		}
	}
	printf("%s", s);
}
