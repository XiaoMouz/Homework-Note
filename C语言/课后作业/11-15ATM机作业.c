#include <stdio.h>
#include <conio.h>
//#include <dos.h> SB head file
#include <windows.h>

//今天又是写屎山的一天呢 11-16 22:41 Start

int LeaveMenuState=0;
int userInput;
int boolInput=1;

void StartMenu(){
	fflush(stdin);
	system("cls");
	printf("********ATM取款机系统********\n");
	printf("-----------------------------\n");
	printf("按照提示输入数字并回车\n");
	printf("1-取款\n");
	printf("2-账户查询\n");
	printf("3-存款\n");
	printf("4-转账\n");
	printf("5-生活缴费\n");
	printf("6-退出\n");
	printf("-----------------------------\n");
}

void SubMenu(){
	fflush(stdin);//清除scanf执行后的缓存
	system("cls");//执行cls命令
	printf("********ATM取款机系统********\n");
	printf("-----------------------------\n");
		switch(userInput){
			case 49: printf("欢迎进入取款界面\n系统正在建设中\n按0退出至主菜单\n");boolInput=1;break;
			case 50: printf("欢迎进入账户查询界面\n系统正在建设中\n按0退出至主菜单\n");boolInput=1;break;
			case 51: printf("欢迎进入存款界面\n系统正在建设中\n按0退出至主菜单\n");boolInput=1;break;
			case 52: printf("欢迎进入转账界面\n系统正在建设中\n按0退出至主菜单\n");boolInput=1;break;
			case 53: printf("欢迎进入生活缴费界面\n系统正在建设中\n按0退出至主菜单\n");;boolInput=1;break;
			case 54: printf("感谢使用，再见");boolInput=1;exit(9);
			default: system("cls");printf("有误请重新输入\n");boolInput=0;
			}

	printf("-----------------------------\n");
}

void LeaveMenu(){
	int input=0;
	input=_getch();
	if(input==48){
		LeaveMenuState=1;	
	}
}

int main(){
	//char choose;
	
	while(1){		
		fflush(stdin);
		StartMenu();
		userInput = _getch();
		//printf("%d",choose); debug Code
		
		SubMenu();
		LeaveMenu();
		
		if(LeaveMenuState){
			continue;
		}
		
		if(boolInput){
			return 0;
		}
		else{
			continue;
		}
	}	
	
}

//没有WIP，这玩意以后不会再续写了，属于是耻辱柱了

//Commits Log:
//23:53:Add Back to Main Menu
//Push Home Work and Sync to Github

//01:07:Change function,delete rubbish code
//Push Home Work again and Sync to Github 有Github写这玩意干啥？闲的睡不着












