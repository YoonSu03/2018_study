#include <stdio.h>
 
int main(void) {
	int a,b;
  int x,y;
  
  scanf("%d %d",&a,&b);
	
	x=a-a/b*b;
	y=a%b;
	printf("%d %d",x,y);
	return 0;
}
