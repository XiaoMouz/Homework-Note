#include <stdio.h>
//�蹤��Ϊ2000Ԫ��10���ڣ�ÿ��������1%���ʣ�������1��7��8�²���������ÿ��ÿ���µĹ���
int main(){
	float wagas=2000;
	
	for(int i=1;i<=10;i++){ //10 years
		for(int j=1;j<=12;j++){ //every month
			if(j==1||j==7||j==8){
				printf("�ڵ�%d�꣬��%d���У�����ڣ����Ĺ���δ����������Ϊ%.2fԪ\n",i,j,wagas);
				continue;
			}else{
				wagas=wagas*0.01+wagas; //up the wagas every one month up 1%
				printf("�ڵ�%d�꣬��%d���У����Ĺ���������1%�����ĵ��¹���Ϊ%.2fԪ\n",i,j,wagas);
			}
		}
	}
	return 0;
}
