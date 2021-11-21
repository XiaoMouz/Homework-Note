#include "stdio.h"

int main(){
	int x,y,z;
	
	printf("input x,y,z\n");
	scanf("%d,%d,%d",&x,&y,&z);
	if((x-y)<z&&(x-z)<y&&(y-z)<x&&(y-x)<z&&(z-x)<y&&(z-y)<x){
		if((x+y)>z&&(x+z)>y&&(y+z)>x&&(y+x)>z&&(z+x)>y&&(z+y)>x){
				if(x==y&&y==z){
					printf("等边三角形\n");
					printf("Perimeter=%d,Area=%d",x+y+z,x*y/2);
				}else if(x==y||x==z||y==z){
					printf("等腰三角形\n");
					printf("Perimeter=%d,Area=%d",x+y+z,x*y/2);
				}else if((x*x+y*y)==z*z||(x*x+z*z)==y*y||(y*y+z*z)==x*x){
					printf("直角三角形\n");
					printf("Perimeter=%d,Area=%d",x+y+z,x*y/2);
				}else{
					printf("非三角形");
				}
		}else{
			printf("非三角形");
		}
	}else{
		printf("非三角形");
	}
	return 0;
}
