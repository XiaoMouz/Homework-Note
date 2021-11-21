#include <stdio.h>

int main(){
	int input;
	
	scanf("%d",&input);
	if(input==2){
		printf("这是素数");
	}else{
		for(int i=2;i<input;i++){
			if(input%i==0){
				pritnf("不是素数");
				return 0;
			}
		}
		printf("是素数");
	}
}
