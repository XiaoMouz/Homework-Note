#include <stdio.h>
#include <string.h>
#include <windows.h>
//做个登录系统
int main(){
	
	char username[20];
	char password[20];
	char input_Username[20];
	char input_Password[20];
	printf("输入您想要的用户名:");
	scanf("%s",username);
	printf("输入您的密码:");
	scanf("%s",password);
	system("cls");
	
	while(1){
		
		printf("输入用户名\n");
		scanf("%s",input_Username);
		printf("请输入密码\n");
		scanf("%s",input_Password);
		
		if(strcmp(username,input_Username)==0&&strcmp(password,input_Password)==0){
			printf("输入正确\n");
			break;
		}
		else{
			printf("输入错误请重新输入\n");
			continue;
		}
	}
	return 0;
}
