#include "stdio.h"

int main(){
	int x,y,z;
	
	printf("input x,y,z\n");
	scanf("%d,%d,%d",&x,&y,&z);
	if((x-y)<z&&(x-z)<y&&(y-z)<x&&(y-x)<z&&(z-x)<y&&(z-y)<x){
		if((x+y)>z&&(x+z)>y&&(y+z)>x&&(y+x)>z&&(z+x)>y&&(z+y)>x){
				if(x==y&&y==z){
					printf("�ȱ�������\n");
					printf("Perimeter=%d,Area=%d",x+y+z,x*y/2);
				}else if(x==y||x==z||y==z){
					printf("����������\n");
					printf("Perimeter=%d,Area=%d",x+y+z,x*y/2);
				}else if((x*x+y*y)==z*z||(x*x+z*z)==y*y||(y*y+z*z)==x*x){
					printf("ֱ��������\n");
					printf("Perimeter=%d,Area=%d",x+y+z,x*y/2);
				}else{
					printf("��������");
				}
		}else{
			printf("��������");
		}
	}else{
		printf("��������");
	}
	return 0;
}
