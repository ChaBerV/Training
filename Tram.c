#include<stdio.h>

int main(){
	int n, x = -1, t = 0;
	scanf("%d", &n);
	int a[1000], b[1000];
	for(int i=0; i<n; i++){
		scanf("%d %d", &a[i], &b[i]);
		t = t - a[i];
		if(t > x){
			x = t;
		}
		t = t + b[i];
		if(t > x){
			x = t;
		}
	}
	printf("%d", x);
	return 0;
}
