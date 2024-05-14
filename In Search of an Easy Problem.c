#include<stdio.h>

int main(){
	int n, x, i = 0;
	scanf("%d", &n);
	while(n--){
		scanf("%d", &x);
		if(x==1){
			printf("HARD");
			return 0;
		}
	}
	printf("EASY");
	return 0;
}
