#include <stdio.h>

int main()
{
	int in, binary, sum = 0, i = 1;
	printf("2���� �Է� : ");
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
	printf("10���� : %d", sum);
}