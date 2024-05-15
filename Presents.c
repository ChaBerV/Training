#include<stdio.h>

int main(){
	int n;
	int ind[100], p[100];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &p[i]);
		ind[i] = i + 1;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(ind[i] == p[j]){
				printf("%d ", j+1);
				break;
			}
		}
	}
	return 0;
}
