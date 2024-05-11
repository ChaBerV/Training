#include<stdio.h>

int main(){
	int n, h, x, t = 0;
	scanf("%d %d", &n, &h);
	while(n--){
		scanf("%d", &x);
		if(x > h){
			t+=2;
		}else{
			t++;
		}
	}
	printf("%d", t);
	return 0;
}
