#include <stdio.h>

int main(){
	int num[10]={1,1};
	for(int i=0;i<20;i++){
		for(int j=i+1;j<20;j++){
			num[j+1]=(num[i]+num[j]);	
		}
	}
	
	for(int l=0;l<10;l++){
		printf("%d\t",num[l]);
	}
}
