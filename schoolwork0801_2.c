#include <stdio.h>

int a[4][4]={0};

void zero()
{
	int i,j;
	
	for(i=0;i<4;i++)
		for(j=0;j<3;j++)
			{
				if(a[j][i]==0)
				{
					a[j][i]=a[j+1][i];
					a[j+1][i]=0;
				}
					
			}
}

int main(void) {
	
	int i,j;
	
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			scanf("%d",&a[i][j]);
	
	zero();
	
	for(i=0;i<4;i++)
	{
		if(a[0][i]==a[1][i])
		{
			a[0][i]+=a[1][i];
			a[1][i]=0;
			if(a[2][i]==a[3][i])
				{
					a[2][i]+=a[3][i];
					a[3][i]=0;
				}
		}
		else if(a[1][i]==a[2][i])
		{
			a[1][i]+=a[2][i];
			a[2][i]=0;
		}
		else if(a[2][i]==a[3][i])
				{
					a[2][i]+=a[3][i];
					a[3][i]=0;
				}
		
	}
	
	zero();
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}	
		
	
	return 0;
}
