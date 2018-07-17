#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
	int data;
	struct node *link;
};

struct node *head = NULL;

void print_menu()
{
	printf("1 : 삽입\n");
	printf("2 : 프린트\n");
	printf("3 : 삭제\n");
	printf("4 : 종료\n");
}

void node_sort(struct node *nnode)
{
	struct node *tempb = head;
	struct node *temp=NULL;

	while (tempb && tempb->data < nnode->data)
	{
			temp = tempb;
			tempb = tempb->link;
	}

	if (temp == NULL) 
	{
		nnode->link = tempb;
		head = nnode;
	}
	else 
	{
		nnode->link = tempb;
		temp = nnode;
	}


}

void append_number()
{
	struct node *nnode = malloc(sizeof(struct node));
	struct node *tempb = head;
	struct node *temp = NULL;

	//struct node *temp = head->link;
	
	printf("입력할 숫자 : ");
	scanf("%d", &nnode->data);


	while (tempb && tempb->data < nnode->data)
	{
		temp = tempb;
		tempb = tempb->link;
	}

	if (temp == NULL)
	{
		nnode->link = tempb;
		head = nnode;
	}
	else
	{
		nnode->link = tempb;
		temp->link = nnode;
	}

}

void print()
{
	int num = 1;
	struct node *curr = head;

	while (curr != NULL)
	{
		printf("Data : %d\t\t NodeNum : %d\n", curr->data, num);
		curr = curr->link;
		num++;
	}
}

void Del()
{
	struct node *removenode = head;
	head = removenode->link;

	free(removenode);
}

int main()
{
	int func;
	int count = 0;

	print_menu();

	while (1)
	{
		printf("기능을 선택 하십시오 : ");

		scanf("%d", &func);

		if (func == 1)
		{
			append_number();
		}

		else if (func == 2)
			print();

		else if (func == 3)
			Del();

		else if (func == 4)
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
