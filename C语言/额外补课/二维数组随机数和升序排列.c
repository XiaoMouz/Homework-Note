#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//����һ��4x5�����飬ʹ���������ʼ������ÿһ�н����������У�Ȼ�����ÿ�е�ƽ��ֵ

int main(){
	int group[4][5];
	int temp;
	
	//��ֵ
	for(int i=0;i<4;i++){
		for(int j=0;j<5;j++){
			srand((unsigned)time(NULL) + rand()); //��һ����ʱ���������ӣ��ڴ˻�����������������丽�����������Ի�ò�ͬ������������α�����
			group[i][j]= rand();
		}
	}
	
	//����
	for(int list=0;list<4;list++){
		for(int x=0;x<5;x++){
			for(int y=0;y<5;y++){
				if(group[list][x]>group[list][y]){
					temp=group[list][x];
					group[list][x]=group[list][y];
					group[list][y]=temp;
				}
			}
		}
	}
	
	//��ӡ����
	for(int a=0;a<4;a++){
		for(int b=0;b<5;b++){
			printf("%d\t",group[a][b]);
		}
		printf("\n");
	}
		
	//��ƽ��������ӡ
	int lineAvg[4]={0,0,0,0};
	for(int line=0;line<4;line++){
		for(int avgA=0;avgA<5;avgA++){
			lineAvg[line]+=group[line][avgA];
		}
		lineAvg[line]=lineAvg[line]/5;
		printf("\n��%d�е�ƽ������%d",line+1,lineAvg[line]);
	}
	return 0;
}
