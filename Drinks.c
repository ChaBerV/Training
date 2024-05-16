#include<stdio.h>

int main(){
	int n, vol, tot = 0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &vol);
		tot+= vol;
	}
	double avg = (double)tot/n;
	printf("%.9f", avg);
}
