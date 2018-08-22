#include <stdio.h>

int main(void)
{
	int in,need=0;
	scanf("%d", &in);

	switch (in%10)
	{
	case 0:
	case 5:
		need = in / 5;
		break;
	case 3:
	case 8:
		if ((in - 3) % 5 != 0 )
		{
			printf("-1");
			return 0;
		}
		need = ((in - 3) / 5) + 1;
		break;
	case 6:
	case 1:
		if ((in - 6) % 5 != 0 )
		{
			printf("-1");
			return 0;
		}
		need = ((in - 6) / 5) + 2;
		break;
	case 9:
	case 4:
		if ((in - 9) % 5 != 0||in-9<0)
		{
			printf("-1");
			return 0;
		}
		need = ((in - 9) / 5) + 3;
		break;
	case 2:
	case 7:
		if ((in - 12) % 5 != 0 || in - 12 < 0)
		{
			printf("-1");
			return 0;
		}
		need = ((in - 12) / 5) + 4;
	default:
		break;
	}
	printf("%d", need);

	return 0;
}
