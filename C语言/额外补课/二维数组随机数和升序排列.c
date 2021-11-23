#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//定义一个4x5的数组，使用随机数初始化，对每一行进行升序排列，然后求出每行的平均值

int main(){
	int group[4][5];
	int temp;
	
	//赋值
	for(int i=0;i<4;i++){
		for(int j=0;j<5;j++){
			srand((unsigned)time(NULL) + rand()); //第一次又时间生成种子，在此基础生成随机数并将其附加在种子中以获得不同的种子来做到伪随机数
			group[i][j]= rand();
		}
	}
	
	//排序
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
	
	//打印数字
	for(int a=0;a<4;a++){
		for(int b=0;b<5;b++){
			printf("%d\t",group[a][b]);
		}
		printf("\n");
	}
		
	//求平均数并打印
	int lineAvg[4]={0,0,0,0};
	for(int line=0;line<4;line++){
		for(int avgA=0;avgA<5;avgA++){
			lineAvg[line]+=group[line][avgA];
		}
		lineAvg[line]=lineAvg[line]/5;
		printf("\n第%d行的平均数是%d",line+1,lineAvg[line]);
	}
	return 0;
}
