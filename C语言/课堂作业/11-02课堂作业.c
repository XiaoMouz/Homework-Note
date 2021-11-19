#include "stdio.h"

int main(){
	char number[11];
	char name[11];
	char class_[11];
	int math,chinese,english;
	
	printf("学号\n");
	scanf("%s",&number);
	printf("姓名\n");
	scanf("%s",&name);
	printf("班级\n");
	scanf("%s",&class_);
	printf("数学成绩\n");
	scanf("%d",&math);
	printf("语文成绩\n");
	scanf("%d",&chinese);
	printf("英语成绩\n");
	scanf("%d",&english);
	
	printf("查看以下信息确保无误\n");
	printf("学号\t姓名\t班级\t数学分数\t语文分数\t英语分数\n");
	printf("%s\t%s\t%s\t%d\t\t%d\t\t%d",number,name,class_,math,chinese,english);
}
