#include <stdio.h>
//设工资为2000元，10年内，每个月增长1%工资，但是在1、7、8月不增长，求每年每个月的工资
int main(){
	float wagas=2000;
	
	for(int i=1;i<=10;i++){ //10 years
		for(int j=1;j<=12;j++){ //every month
			if(j==1||j==7||j==8){
				printf("在第%d年，第%d月中，因假期，您的工资未增长，依旧为%.2f元\n",i,j,wagas);
				continue;
			}else{
				wagas=wagas*0.01+wagas; //up the wagas every one month up 1%
				printf("在第%d年，第%d月中，您的工资增长了1%，您的当月工资为%.2f元\n",i,j,wagas);
			}
		}
	}
	return 0;
}
