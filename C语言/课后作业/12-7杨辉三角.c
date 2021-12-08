#include<stdio.h>
#define M 7
//time out,searching answer in Internet
int main(){
	int a [M][M], i, j; 
	for (i = 0; i<M; i++){
		for (j = 0;j <= M-i; j++){
			printf ("  ");	
		}
   		for (j = 0; j <= i; j++){
			printf("%4d", (a[i][j] = (i == j || j == 0) ? 1 : a[i - 1][j] + a[i - 1][j - 1] )); 	
		}
    	printf("\n");
	}
	return 0;
}
