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
	printf("학번 : ");
	scanf("%d", &person[i].number);
	printf("이름 : ");
	scanf("%s", person[i].name);
	printf("수학 점수 : ");
	scanf("%d", &person[i].sub1);
	printf("영어 점수 : ");
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
	printf("성적 확인\n");
	printf("학번 : ");
	scanf("%d", &num);

	for (j = 0; j < 3; j++)
	{
		if (person[j].number == num)
			break;
	}
	system("cls");

	printf("--------------------------\n");
	printf("학번 : %d\n", person[j].number);
	printf("이름 : %s\n", person[j].name);
	printf("math : %d\n", person[j].sub1);
	printf("학점 : %c\n", person[j].score1);
	printf("english : %d\n", person[j].sub2);
	printf("학점 : %c\n", person[j].score2);
	printf("--------------------------");

	

									//그냥 넘어가는 부분 처리 해야함
	
}

int menu()
{
	int sel;
	while (1)
	{
		system("cls");
		printf("1.성적입력\n");
		printf("2.성적-학생별 출력\n");
		printf("3.종료\n");

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
