#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a[4][4]={0};

void zero_up()
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

void zero_down()
{
	int i,j;
	
	for(i=0;i<4;i++)
		for(j=3;j>0;j--)
			{
				if(a[j][i]==0)
				{
					a[j][i]=a[j-1][i];
					a[j-1][i]=0;
				}
					
			}
}

void zero_left()
{
	int i,j;
	
	for(i=0;i<4;i++)
		for(j=0;j<3;j++)
			{
				if(a[i][j]==0)
				{
					a[i][j]=a[i][j+1];
					a[i][j+1]=0;
				}
					
			}
}

void zero_right()
{
	int i,j;
	
	for(i=0;i<4;i++)
		for(j=3;j>0;j--)
			{
				if(a[i][j]==0)
				{
					a[i][j]=a[i][j-1];
					a[i][j-1]=0;
				}
					
			}
}

void move_left()
{
	int i,j;
	
	for(i=0;i<4;i++)
		for(j=0;j<3;j++)
			{
				if(a[i][j]==a[i][j+1])
					{
						a[i][j]+=a[i][j+1];
						a[i][j]=0;
						zero_left();
					}
				
			}
}

void move_right()
{
	int i,j;
	
	for(i=0;i<4;i++)
		for(j=3;j>0;j--)
			{
				if(a[i][j]==a[i][j-1])
					{
						a[i][j]+=a[i][j-1];
						a[i][j]=0;
						zero_right();
					}
				
			}
} 
 
 void move_up()
 {
 	int i,j;
	
	for(i=0;i<4;i++)
		for(j=0;j<3;j++)
			{
				if(a[j][i]==a[j+1][i])
					{
						a[j][i]+=a[j+1][i];
						a[j][i]=0;
						zero_up();
					}
				
			}
 }
 
 void move_down()
 {
 	int i,j;
	
	for(i=0;i<4;i++)
		for(j=3;j>0;j--)
			{
				if(a[j][i]==a[j-1][i])
					{
						a[j][i]+=a[j-1][i];
						a[j][i]=0;
						zero_down();
					}
				
			}
 }

int main() {
	
	int i,j,k,l;
	
	char key=0;
	
	srand(time(NULL)); 
	
	while(key!='q')
	{
		system("cls");
		
		 k=rand()%4;
		 l=rand()%4;
		 
		 a[k][l]=2;
		 
		for(i=0;i<4;i++)
			{
			for(j=0;j<4;j++)
				printf("%d ",a[i][j]);
			printf("\n");
			}
			
		key=getch();
		
		if(key==224)
		{
			key=getch();
			
			switch(key)
			{
				case 72: move_up();
				break;
				case 80: move_down();
				break;
				case 75: move_left();
				break;
				case 77: move_right();
				break;
			}
			
		}
	}
	
	
	
	
	return 0;
}
