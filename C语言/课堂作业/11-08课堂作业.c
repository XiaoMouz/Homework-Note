#include <stdio.h>

int main(){
	int input_Time;
	printf("���뵱ǰ��Сʱʱ��\n");
	scanf("%d",&input_Time);
	//����д�˸��İ�
	if(input_Time<=6){
		printf("�賿");
	}else if(input_Time<=8){
		printf("����");
	}else if(input_Time<=12){
		printf("����");
	}else if(input_Time<=14){
		printf("����");
	}else if(input_Time<=18){
		printf("����");
	}else if(input_Time<=20){
		printf("����");
	}else if(input_Time<=24){
		printf("����");
	}
}
