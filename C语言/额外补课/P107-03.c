//����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ�������ĸ�ĸ���
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
	
	//¼������
	while((temp=getch())!=13){
		string[i++]=temp;
		//�ж���������
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
	//��ӡ
	printf("\n");
	printf("%s\n",string);
	printf("Word:%d,Number:%d,Space:%d,Other:%d",english,num,space,other);
	
	return 0;
}
