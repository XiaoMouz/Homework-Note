//���1-20���ܱ�5������������������
#include <stdio.h>

int main(){
	int sum=0;
	for(int i=1;i<=20;i++){
		if(i%5==0){
			printf("%d\t",i);
			sum+=i;
		}
	}	
	printf("\n");
	printf("%d",sum);
	return 0;
}
