#include <stdio.h>

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main(void) {
	int a,b,c,d;
	
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	if(b<a)
		swap(a,b);
	if(d<c)
		swap(c,d);
		
	if(c>a&&c<b&&d>b)
		printf("cross");
	else if(a>c&&a<d&&b>d)
		printf("cross");
	else
		printf("not cross");
		
	return 0;
}
