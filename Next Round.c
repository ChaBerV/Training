#include <stdio.h>

int main(){
	int n, m, x[101], sum = 0;
	scanf("%d %d", &n, &m);
	for(int i = 0; i < n; i++){
		scanf("%d", &x[i]);
	}
	for(int i = 0; i < n; i++){
		if(x[i] >= x[m-1] && x[i] > 0){
			sum++;
		}
	}
	printf("%d", sum);
}
