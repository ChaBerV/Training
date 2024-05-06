#include<stdio.h>
#include<string.h>

int main(){
	char s[101];
	scanf("%s", s);
	int n = strlen(s), m = 0;
	char a[26] = {0};
	int ind;
	for(int i=0; i<n; i++){
		ind = s[i] - 'a';
		if(a[ind] == 0){
			m++;
		}
		a[ind]++;		
	}
	if(m%2 == 0){
		printf("CHAT WITH HER!\n");
	}else {
		printf("IGNORE HIM!\n");
	}
}
