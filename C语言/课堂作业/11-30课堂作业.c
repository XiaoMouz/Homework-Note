#include "stdio.h"

int main(){
	int list[10]={0};
	int temp=0;
	//请求输入
	printf("input 10 numbers,user Enter switch input number\n");
	for(int i=0;i<10;i++){
		scanf("%d",&list[i]);
	}
	
	for(int o=0;o<10;o++){
		printf("%d\t",list[o]);
	}
	
	printf("\n排序后\n");
	
	//排序
	for(int j=0;j<10;j++){
		for(int k=0;k<10;k++){
			if(list[j]<list[k]){
				temp=list[j];
				list[j]=list[k];
				list[k]=temp;
			}
		}
	}
	for(int p=0;p<10;p++){
		printf("%d\t",list[p]);
	}
	
	return 0;
}
