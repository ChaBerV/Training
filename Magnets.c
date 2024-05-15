#include<stdio.h>

int main(){
	int n, count=1;
	scanf("%d", &n);
	char s[200001];
	for(int i=0; i<n*2; i++){
		scanf(" %c", &s[i]);
	}
	for(int i=0; i<n*2; i+=2){
		if(s[i]=='0'){
			if(s[i+2]=='1'){
				count++;
			}
		}else if(s[i]=='1'){
			if(s[i+2]=='0'){
				count++;
			}
		}
	}
	printf("%d", count);
}
