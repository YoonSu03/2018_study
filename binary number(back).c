#include <stdio.h>

int main()
{
	int in, binary, sum = 0, i = 1;
	printf("2진수 입력 : ");
	do
	{
		scanf("%d", &in);
	} while (in<0);
	while (in > 0)
	{
		binary = in % 10;
		sum += binary * i;
		in = in / 10;
		i *= 2;
	}
	printf("10진수 : %d", sum);
}