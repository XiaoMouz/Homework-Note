#include "stdio.h"
#include "conio.h"
#include "dos.h"
#include "windows.h"
#include "string.h"

void gotoxy(int x,int y){
	COORD coord={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main(){
	int j=0;
	char username[]={"Admin"};
	char password[]={"88888888"};
	char temp;
	char userinput_Username[20];
	char userinput_Password[20];
	gotoxy(23,8);printf("---------Student infomation manage system---------");
	for(int i=5;i>0;i--){
			gotoxy(30,10);printf("请输入用户名:");
			scanf("%s",&userinput_Username);
			
			gotoxy(30,12);printf("请输入密码：");
			while((temp=getch())!=13){
				userinput_Password[j++]=temp;
				putchar('-');
			}
			userinput_Password[j]+='\0';
			
			if(strcmp(username,userinput_Username)==0 && strcmp(password,userinput_Password)==0){
				gotoxy(30,14);
				printf("Login Success");
				break;
			}else{
				gotoxy(30,14);
				printf("Login Fail.您还有%d次机会",i-1);
				continue;
			}
	}
	gotoxy(30,16);printf("Welcome Login");
	gotoxy(23,18);printf("-----------------------------------------------");
	
	return 0;
}
