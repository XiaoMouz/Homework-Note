#include <stdio.h>

int main(){
	int input;
	
	scanf("%d",&input);
	if(input==2){
		printf("��������");
	}else{
		for(int i=2;i<input;i++){
			if(input%i==0){
				pritnf("��������");
				return 0;
			}
		}
		printf("������");
	}
}
