#include <stdio.h>
#include <string.h>
#include <Windows.h>

struct student
{
	char name[20];
	int number;
	int sub1;
	int sub2;
	char score1;
	char score2;
};

struct student person[3];
int i=0;



int score_process(int a)
{
	if (a >= 90)
		return 'A';
	else if (a >= 80)
		return 'B';
	else if (a >= 70)
		return 'C';
	else
		return 'F';
}
void input_score()
{
	system("cls");
	printf("�й� : ");
	scanf("%d", &person[i].number);
	printf("�̸� : ");
	scanf("%s", person[i].name);
	printf("���� ���� : ");
	scanf("%d", &person[i].sub1);
	printf("���� ���� : ");
	scanf("%d", &person[i].sub2);
	person[i].score1 = score_process(person[i].sub1);
	person[i].score2 = score_process(person[i].sub2);
	i++;
	getchar();
}
void print_score()
{
	int num,j,but;
	char a;
	system("cls");
	printf("���� Ȯ��\n");
	printf("�й� : ");
	scanf("%d", &num);

	for (j = 0; j < 3; j++)
	{
		if (person[j].number == num)
			break;
	}
	system("cls");

	printf("--------------------------\n");
	printf("�й� : %d\n", person[j].number);
	printf("�̸� : %s\n", person[j].name);
	printf("math : %d\n", person[j].sub1);
	printf("���� : %c\n", person[j].score1);
	printf("english : %d\n", person[j].sub2);
	printf("���� : %c\n", person[j].score2);
	printf("--------------------------");

	

									//�׳� �Ѿ�� �κ� ó�� �ؾ���
	
}

int menu()
{
	int sel;
	while (1)
	{
		system("cls");
		printf("1.�����Է�\n");
		printf("2.����-�л��� ���\n");
		printf("3.����\n");

		scanf("%d", &sel);

		switch (sel)
		{
		case 1:
			input_score();
			break;
		case 2:
			print_score();
			break;
		case 3:
			return 0;
		}
	}
	
}

int main()
{
	menu();
}
