#include<stdio.h>
#include<string.h>

int main(){
	char s[101], t[101];
	scanf("%s %s", s, t);
	int n = strlen(s);
	int x = 0;
	for(int i=0; i<n; i++){
		for(int j = n-1; j>=0; j--){
			if(s[i] == t[j]){
				i++;
				x++;
			}else{
				printf("NO");
				return 0;
			}
		}
	}
	if(x==n){
		printf("YES");
	}
}
