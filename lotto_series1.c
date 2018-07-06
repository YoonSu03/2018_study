#include <stdio.h>

void print_graph(int *ps)
{
	int num = *ps / 5;
	printf("(%3d) ", *ps);
	for (int i = 0; i < num; i++)
		printf("*");
	printf("\n");
}

int main()
{
	int score[5] = { 72,88,95,64,100 };

	for (int i = 0; i < 5; i++)
	{
		print_graph(&score[i]);
	}
}