#include "stdio.h"
//求1-1000的总和，若遇到6的倍数则不加
int main(){
	int sum;
	for(int i=0;i<=1000;i++){
		if(i%6==0){ //若是6的倍数直接跳过
			continue;gv
		}
		else{
			sum+=i;
		}
	}
	printf("%d",sum);
	return 0;
}
