#include "stdio.h"
//��1-1000���ܺͣ�������6�ı����򲻼�
int main(){
	int sum;
	for(int i=0;i<=1000;i++){
		if(i%6==0){ //����6�ı���ֱ������
			continue;gv
		}
		else{
			sum+=i;
		}
	}
	printf("%d",sum);
	return 0;
}
