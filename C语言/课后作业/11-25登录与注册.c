#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <conio.h>

int main(){
	char username[20]="admin";
	char password[20]="123123";
	char input_une[20]="admin";
	char input_pwd[20]="123123";
	char choose;
	char temp;
	int pwd_i=0;
	
	while(1){
		pwd_i=0;
		printf("Username:");
		scanf("%s",input_une);
		printf("Password£º");
		while((temp=getch())!=13){
			input_pwd[pwd_i++]=temp;
			putchar('*');
		}
		if(strcmp(input_une,username)==0&&strcmp(input_pwd,password)==0){
			system("cls");
			printf("Logged Success,%s",username);
			return 1;
		}else{
			system("cls");
			printf("The account not in Database,did you want register a new account?(Y/N)");
			if((choose=getch())==89||choose==121){
				system("cls");
				printf("Input your username:");
				scanf("%s",input_une);
				printf("Input your password:");
				pwd_i=0;
				while((temp=getch())!=13){
					input_pwd[pwd_i++]=temp;
					putchar('*');
				}
				system("cls");
				continue;
			}
			else{
				system("cls");
				continue;
			}
		}
	}
	
	return 0;
}
