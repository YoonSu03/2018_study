#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
	int data;
	int type;
	char sdata[50];
	struct node *link;
};

void print_menu()
{
	printf("1 : 삽입(숫자)\n");
	printf("2 : 삽입(문자)\n");
	printf("3 : 삽입(숫자&문자)\n");
	printf("4 : 프린트\n");
	printf("5 : 삭제\n");
	printf("6 : 종료\n");
}

void append_number(struct node *head)
{
	struct node *nnode = malloc(sizeof(struct node));
	int data;

	printf("입력할 숫자 : ");
	scanf("%d", &data);

	nnode->link = head->link;
	nnode->data = data;
	nnode->type = 1;
	head->link = nnode;
}

void append_string(struct node *head)
{
	struct node *nnode = malloc(sizeof(struct node));
	char sdata[50];

	printf("입력할 문자 : ");
	scanf("%s", sdata);

	nnode->link = head->link;
	strcpy(nnode->sdata, sdata);
	nnode->type = 2;
	head->link = nnode;
}

void append_number_string(struct node *head)
{
	struct node *nnode = malloc(sizeof(struct node));
	int data;
	char sdata[50];

	printf("입력할 숫자 : ");
	scanf("%d", &data);
	printf("입력할 문자 : ");
	scanf("%s", sdata);

	nnode->link = head->link;
	nnode->data = data;
	strcpy(nnode->sdata, sdata);
	nnode->type = 3;
	head->link = nnode;
}

void print(struct node *head)
{
	int num = 1;
	struct node *curr = head->link;

	while (curr !=NULL)
	{
		switch (curr->type)
		{
		case 1:
			printf("Data : %d\t\t NodeNum : %d\n", curr->data, num);
			break;
		case 2:
			printf("Data : %s\t\t NodeNum : %d\n", curr->sdata, num);
			break;
		default:
			printf("Data : %d\t%s \t NodeNum : %d\n", curr->data, curr->sdata, num);
			break;
		}
		curr = curr->link;
		num++;
	}
}

void Del(struct node *head)
{
	struct node *removenode = head->link;
	head->link = removenode->link;

	free(removenode);
}

int main()
{
	int func;
	struct node *head = malloc(sizeof(struct node));
	
	head->link = NULL;

	print_menu();

	while (1)
	{
		printf("기능을 선택 하십시오 : ");

		scanf("%d", &func);

		if (func == 1)
			append_number(head);

		else if (func == 2)
			append_string(head);

		else if (func == 3)
			append_number_string(head);

		else if (func == 4)
			print(head);

		else if(func==5)
			Del(head);

		else if (func==6)
		{
			struct node *curr = head->link;
			while (curr != NULL)
			{
				struct node *next = curr->link;
				free(curr);
				curr = next;
			}
			break;
		}

		else
			printf("잘못된 기능 선택입니다.\n");
	}
	free(head);

	return 0;
}