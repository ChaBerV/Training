#include<stdio.h>
#include<string.h>

int main(){
	char s[101];
	scanf("%s", s);
	int n = strlen(s), l = 0, u = 0;
	for(int i=0; i<n; i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			u++;
		}else {
			l++;
		}
	}
	if(u > l){
		for(int i=0; i<n; i++){
			if(s[i] >= 'a' && s[i] <= 'z'){
				s[i]-=32;
			}
		}
	}else{
		for(int i=0; i<n; i++){
			if(s[i] >= 'A' && s[i] <= 'Z'){
				s[i]+=32;
			}
		}
	}
	printf("%s", s);
}
