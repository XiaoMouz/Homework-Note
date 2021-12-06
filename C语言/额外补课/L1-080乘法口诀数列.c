#include <stdio.h>

void whatsUp(int num,int *ten,int *single){
	if(num>=10){
		*ten=num/10;
		*single=num%10;
	}else{
		*single=num;
	}
}

int main(){
	int a,b,n,ten,single;
	int nums[1000]={0};
	scanf("%d %d %d",&a,&b,&n);
	nums[0]=a;
	nums[1]=b;
	
	for(int i=2;i<n;i++){
		ten=0,single=0;
		whatsUp(nums[i-1]*nums[i-2],&ten,&single);
		if(ten!=0){
			nums[i]=ten;
			nums[i+1]=single;
			i++;
		}else{
			nums[i]=single;
		}	
	}
	
	for(int k=0;k<n;k++){
		printf("%d ",nums[k]);
	}
	return 0;
}
