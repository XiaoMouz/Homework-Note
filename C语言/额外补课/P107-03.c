//输入一行字符，分别统计出其中英文字母、空格、数字和其它字母的个数
#include <stdio.h>
#include <conio.h>
int main(){
	char string[10];
	char temp;
	int english=0;
	int space=0;
	int num=0;
	int other=0;
	int i=0;
	
	//录入输入
	while((temp=getch())!=13){
		string[i++]=temp;
		//判断输入类型
		if(temp==32){
			space++;
		}else if(47<temp&&temp<58){
			num++;
		}else if((64<temp&&temp<91)||(96<temp&&temp<123)){
			english++;
		}else{
			other++;
		}
		putchar(temp);
	}
	//打印
	printf("\n");
	printf("%s\n",string);
	printf("Word:%d,Number:%d,Space:%d,Other:%d",english,num,space,other);
	
	return 0;
}
