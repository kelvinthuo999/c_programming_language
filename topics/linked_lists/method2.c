#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *ptn;
};

int count(struct node *head)
{
	int num = 0;

	while (head != NULL)
	{
		num++;
		head = head->ptn;
	}
	return (num);
}

int main(void)
{
	struct node *head = malloc(sizeof(struct node));
	head->data = 26;
	head->ptn = NULL;

	struct node *block = malloc(sizeof(struct node));
	block->data = 27;
	block->ptn = NULL;
	head->ptn = block;

	block = malloc(sizeof(struct node));
	block->data = 28;
	block->ptn = NULL;

	head->ptn->ptn = block;

	printf("The first data in list is %d.\n", head->data);
	printf("The second data in list is %d.\n", head->ptn->data);
	printf("The third data in list is %d.\n", head->ptn->ptn->data);

	int num = count(head);
	
	printf("%d.", num);

	return (0);
}
