#include <stdio.h>
#include <string.h>
#include <windows.h>
//������¼ϵͳ
int main(){
	
	char username[20];
	char password[20];
	char input_Username[20];
	char input_Password[20];
	printf("��������Ҫ���û���:");
	scanf("%s",username);
	printf("������������:");
	scanf("%s",password);
	system("cls");
	
	while(1){
		
		printf("�����û���\n");
		scanf("%s",input_Username);
		printf("����������\n");
		scanf("%s",input_Password);
		
		if(strcmp(username,input_Username)==0&&strcmp(password,input_Password)==0){
			printf("������ȷ\n");
			break;
		}
		else{
			printf("�����������������\n");
			continue;
		}
	}
	return 0;
}
