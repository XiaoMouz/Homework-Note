//����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ�������ĸ�ĸ���
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
	
	//¼������
	while((temp=getch())!=13&&(i<120)){
		string[i++]=temp;
		
		//�ж���������
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
	//��ӡ
	printf("\n");
	printf("%s\n",string);
	printf("Small Engilsh Word:%d,Number:%d,Big English Word:%d,Other:%d",english,num,bigEnglish,other);
	
	return 0;

}
