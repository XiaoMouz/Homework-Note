#include "stdio.h"

int main(){
	int score[5]={0};
	for(int i=0;i<5;i++){
		printf("input a number\n");
		scanf("%d",&score[i]);
	}
	for(int j=0;j<5;j++){
		printf("the %d classmate score is %d\n",j+1,score[j]);
	}
	
	int max=0;
	for(int k=0;k<5;k++){
		if(score[k]>max){
			max=score[k];
		}
	}
	printf("the user inout max is %d",max);
}
