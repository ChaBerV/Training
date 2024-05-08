#include<stdio.h>

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	while(k!=0){
		if(n % 10 == 0){
			n = n/10;
			k--;
		}else {
			n--;
			k--;
		}	
	}
	printf("%d", n);
	return 0;
}
