//�������������������������
#include <stdio.h>
#include <string.h>
//reverse���������ҵ�д�ģ��������

///���ַ�����ת��ֱ�Ӹ�ֵ
///s:Ҫ��ת���ַ���
void reverse(char* s)
{
    // ��ȡ�ַ�������
    int len = 0;
    char* p = s;
    while (*p != 0)
    {
        len++;
        p++;
    }
    
    // ����
    int i = 0;
    char c;
    while (i <= len / 2 - 1)
    {
        c = *(s + i);
        *(s + i) = *(s + len - 1 - i);
        *(s + len - 1 - i) = c;
        i++;
    }
}
 

int main(){
	char numbers[30];
	char numAnti[30];
	
	//��������
	printf("��������\n");
	scanf("%s",numbers);
	//���Ķ���
	strcpy(numAnti,numbers);
	reverse(numAnti);
	//���
	printf("%s",numAnti);
	
	return 0;	
}
