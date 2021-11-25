#include <stdio.h>
//封装一下，太丑了
int anti1000number(int i){
	int anti;
	if(i/1000>0){
		anti+=i/1000;
		anti+=i%10*1000;
		anti+=i%100/10*100;
		anti+=i%1000/100*10;
	}else if(i/100>0){	
		anti+=i%10*100;
		anti+=i%100;
	}
	return anti;	
	
}

int main(){
	int anti;
	for(int i=100;i<=10000;i++){
		anti=0;
		
		anti=anti1000number(i);
		
		if(anti==i){
			printf("%d\t",i);
		}
	}
	
	return 0;
}
