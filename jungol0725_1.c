#include <stdio.h>

int main(void) {
	int a,indices,num,i,count=0,real=1;
	
	scanf("%d %d %d",&a,&indices,&num);
	
	for(i=0;i<indices;i++)
		real=real*a;
		
	while(real>0)
	{
		if(real%num==0)
			count++;
		else
			break;
		real=real/4;
	}
	
	printf("%d",count);
	
	return 0;
}
