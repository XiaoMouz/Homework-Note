#include <stdio.h>

int main(){
	int input_Time;
	printf("输入当前的小时时间\n");
	scanf("%d",&input_Time);
	//？你写了个寄吧
	if(input_Time<=6){
		printf("凌晨");
	}else if(input_Time<=8){
		printf("早上");
	}else if(input_Time<=12){
		printf("上午");
	}else if(input_Time<=14){
		printf("中午");
	}else if(input_Time<=18){
		printf("下午");
	}else if(input_Time<=20){
		printf("傍晚");
	}else if(input_Time<=24){
		printf("晚上");
	}
}
