#include <stdio.h>


int main()
{
	int num, binary, sum = 0, i = 1;
	printf("10진수를 입력하세요 : ");
	scanf("%d", &num);
	printf("\n\n10진수 : %d", num);
	while (num > 0)
	{
		binary = num % 2;		//2로 나눈 나머지를 binary에 저장
		sum += binary * i;		//binary에 i를 곱한 값을 sum에 저장
		num = num / 2;		 //num에 2로 나눈 몫을 num에 저장
		i *= 10;		//i에 10을 곱한 값을 i에 저장
	}
	printf("\n 2진수 : %d\n", sum);
}
