#include <stdio.h>
#include <conio.h>
//#include <dos.h> SB head file
#include <windows.h>

//��������дʺɽ��һ���� 11-16 22:41 Start

int LeaveMenuState=0;
int userInput;
int boolInput=1;

void StartMenu(){
	fflush(stdin);
	system("cls");
	printf("********ATMȡ���ϵͳ********\n");
	printf("-----------------------------\n");
	printf("������ʾ�������ֲ��س�\n");
	printf("1-ȡ��\n");
	printf("2-�˻���ѯ\n");
	printf("3-���\n");
	printf("4-ת��\n");
	printf("5-����ɷ�\n");
	printf("6-�˳�\n");
	printf("-----------------------------\n");
}

void SubMenu(){
	fflush(stdin);//���scanfִ�к�Ļ���
	system("cls");//ִ��cls����
	printf("********ATMȡ���ϵͳ********\n");
	printf("-----------------------------\n");
		switch(userInput){
			case 49: printf("��ӭ����ȡ�����\nϵͳ���ڽ�����\n��0�˳������˵�\n");boolInput=1;break;
			case 50: printf("��ӭ�����˻���ѯ����\nϵͳ���ڽ�����\n��0�˳������˵�\n");boolInput=1;break;
			case 51: printf("��ӭ���������\nϵͳ���ڽ�����\n��0�˳������˵�\n");boolInput=1;break;
			case 52: printf("��ӭ����ת�˽���\nϵͳ���ڽ�����\n��0�˳������˵�\n");boolInput=1;break;
			case 53: printf("��ӭ��������ɷѽ���\nϵͳ���ڽ�����\n��0�˳������˵�\n");;boolInput=1;break;
			case 54: printf("��лʹ�ã��ټ�");boolInput=1;exit(9);
			default: system("cls");printf("��������������\n");boolInput=0;
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

//û��WIP���������Ժ󲻻�����д�ˣ������ǳ�������

//Commits Log:
//23:53:Add Back to Main Menu
//Push Home Work and Sync to Github

//01:07:Change function,delete rubbish code
//Push Home Work again and Sync to Github ��Githubд�������ɶ���е�˯����












