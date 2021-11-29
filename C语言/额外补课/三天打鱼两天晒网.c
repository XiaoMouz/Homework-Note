#include "stdio.h"

int main(){
	int days;
	scanf("%d",&days);
	if(days%5<=3&&days%5>0){
		printf("Fishing in Day %d",days);
	}else if(days%5==0||days%5>3){
		printf("Drying in Day %d",days);
	}
	
	return 0;
}

