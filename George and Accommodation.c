#include<stdio.h>

int main(){
	int n, p, q;
	scanf("%d", &n);
	int count = 0;
	while(n--){
		scanf("%d %d", &p, &q);
		if(p <= q-2){
			count++;
		}
	}
	printf("%d", count);
}
