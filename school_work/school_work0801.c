#include <stdio.h>

void swap(int* ptr1, int* ptr2){
  int temp=0;
  
  temp=*ptr1;
  *ptr1=*ptr2;
  *ptr2=temp;
}

int year_check(int year)
{
	if(year%4==0)
	{	if(year%400==0)
			return 1;
		else if(year%100==0)
			return 0;
		else 
			return 1;
	}
	else
		return 0;
}

int day_return(int year,int month)
{
	switch(month)
	{
		case 1: return 31;
		case 2: if(year_check(year)==1)
			return 29;
		else
		return 28;
		
		case 3: return 31;
		case 4: return 30;
		case 5: return 31;
		case 6: return 30;
		case 7: return 31;
		case 8: return 31;
		case 9: return 30;
		case 10: return 31;
		case 11: return 30;
		case 12: return 31;
	}
}

int year_day(int year)
{
	if(year_check(year)==1)
		return 366;
	else 
		return 365;
}

int main(void) {
	int t_year,t_month,t_day;
	int d_year,d_month,d_day;
	int temp_day=0,i,temp_month=1;
	
	scanf("%d %d %d",&t_year,&t_month,&t_day);
	scanf("%d %d %d",&d_year,&d_month,&d_day);
	
	if(t_year==d_year&&t_month==d_month&&t_day==d_day)
		printf("D-day");
	
	else if(t_year==d_year)
	{
		if(t_month!=d_month)
		{	for(i=0;t_month!=d_month;i++)
			{
				if(i==0)
					temp_day+=day_return(t_year,t_month)-t_day;
				else
					temp_day+=day_return(t_year,t_month);
				t_month++;
			}
			printf("D%d",-(temp_day+d_day));
		}
		else	
	    	printf("D%d",-(d_day-t_day));
	}
	else if(t_year<d_year)
	{
	
		for(i=0;t_month!=13;i++)
			{
				if(i==0)
					temp_day+=day_return(t_year,t_month)-t_day;
				else
					temp_day+=day_return(t_year,t_month);
				t_month++;
			}
		t_year++;
		while(t_year!=d_year)
		{
			if(t_year!=d_year)
				temp_day+=year_day(t_year);
				
			t_year++;
		}
		
		if(t_year==d_year)
		{
				for(i=0;temp_month!=d_month;i++)
			{
	
				temp_day+=day_return(t_year,temp_month);
				temp_month++;
			}
			printf("D%d",-(temp_day+d_day));
	
		}
		
	}
	
	else if(t_year>d_year)
	{
		swap(&t_year,&d_year);
		swap(&t_month,&d_month);
		swap(&t_day,&d_day);
	
		for(i=0;t_month!=13;i++)
			{
				if(i==0)
					temp_day+=day_return(t_year,t_month)-t_day;
				else
					temp_day+=day_return(t_year,t_month);
				t_month++;
			}
		t_year++;
		while(t_year!=d_year)
		{
			if(t_year!=d_year)
				temp_day+=year_day(t_year);
				
			t_year++;
		}
		
		if(t_year==d_year)
		{
				for(i=0;temp_month!=d_month;i++)
			{
	
				temp_day+=day_return(t_year,temp_month);
				temp_month++;
			}
			printf("D+%d",(temp_day+d_day));
	
		}
		
	}
	
	return 0;
}
