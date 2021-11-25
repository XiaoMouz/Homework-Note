#include <stdio.h>
#include <string.h>
//reverse函数不是我的写的，自行体会
//将字符串反转并直接赋值
void reverse(char* s)
{
    // 获取字符串长度
    int len = 0;
    char* p = s;
    while (*p != 0)
    {
        len++;
        p++;
    }
    
    // 交换
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
	
	//请求输入
	printf("输入数字\n");
	scanf("%s",numbers);
	//懂的都懂
	strcpy(numAnti,numbers);
	reverse(numAnti);
	//对比
	if((strcmp(numbers,numAnti))==0){
		
		printf("这是回文数");
	}
	else{
		printf("这不是回文数");
	}
	
	return 0;	
}
