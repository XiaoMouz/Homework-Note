#include "stdio.h"

int main(){
	char number[11];
	char name[11];
	char class_[11];
	int math,chinese,english;
	
	printf("ѧ��\n");
	scanf("%s",&number);
	printf("����\n");
	scanf("%s",&name);
	printf("�༶\n");
	scanf("%s",&class_);
	printf("��ѧ�ɼ�\n");
	scanf("%d",&math);
	printf("���ĳɼ�\n");
	scanf("%d",&chinese);
	printf("Ӣ��ɼ�\n");
	scanf("%d",&english);
	
	printf("�鿴������Ϣȷ������\n");
	printf("ѧ��\t����\t�༶\t��ѧ����\t���ķ���\tӢ�����\n");
	printf("%s\t%s\t%s\t%d\t\t%d\t\t%d",number,name,class_,math,chinese,english);
}
