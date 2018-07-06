#include <stdio.h>

int check_same(int *lotto_nums, int *my_num)
{
	int count = 0;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (lotto_nums[j] == my_num[i])
				count++;
		}
	}
	return count;
}

int main()
{
	int lotto_nums[6] = { 4,10,25,30,41,45 };
	int my_nums[6] = { 1,4,7,22,41,43 };

	printf("일치하는 번호의 개수 : %d\n", check_same(lotto_nums, my_nums));

	return 0;
}