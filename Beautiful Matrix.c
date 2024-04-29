#include<stdio.h>
#include<stdlib.h>

int main(){
	int midx = 3, midy = 3, subx, suby;
	int mat[5][5];
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			scanf("%d", &mat[i][j]);
			if(mat[i][j]==1){
				subx = i + 1;
				suby = j + 1;
			}
		}
	}
	midx -= subx; midy -= suby;
	midx = abs(midx); midy = abs(midy);
	int mov = midx + midy;
	printf("%d", mov);
}
