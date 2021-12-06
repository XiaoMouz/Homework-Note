#include <stdio.h>

int main(){
	int nums[9][9];
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			nums[i][j]=((i+1)*(j+1));
		}
	}
	
	for(int l=1;l<=9;l++){
		for(int u=1;u<=9;u++){
			printf("%d x %d = %d\t",l,u,nums[l-1][u-1]);
		}
		printf("\n");
	}
	
	return 0;
}
