#include <stdio.h>


int main()
{
	int num, binary, sum = 0, i = 1;
	printf("10������ �Է��ϼ��� : ");
	scanf("%d", &num);
	printf("\n\n10���� : %d", num);
	while (num > 0)
	{
		binary = num % 2;		//2�� ���� �������� binary�� ����
		sum += binary * i;		//binary�� i�� ���� ���� sum�� ����
		num = num / 2;		 //num�� 2�� ���� ���� num�� ����
		i *= 10;		//i�� 10�� ���� ������ i�� ����
	}
	printf("\n 2���� : %d\n", sum);
}