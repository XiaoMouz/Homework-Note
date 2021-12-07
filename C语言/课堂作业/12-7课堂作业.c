//输入一行字符，分别统计出其中英文字母、空格、数字和其它字母的个数
#include <stdio.h>
#include <conio.h>
int main(){
	char string[120];
	char temp;
	int english=0;
	int bigEnglish=0;
	int num=0;
	int other=0;
	int i=0;
	
	//录入输入
	while((temp=getch())!=13&&(i<120)){
		string[i++]=temp;
		
		//判断输入类型
		if(64<temp&&temp<91){
			bigEnglish++;
		}else if(47<temp&&temp<58){
			num++;
		}else if(96<temp&&temp<123){
			english++;
		}else{
			other++;
		}
		putchar(temp);
	}
	//打印
	printf("\n");
	printf("%s\n",string);
	printf("Small Engilsh Word:%d,Number:%d,Big English Word:%d,Other:%d",english,num,bigEnglish,other);
	
	return 0;

}
