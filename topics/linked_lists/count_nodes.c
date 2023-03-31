#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *ptn;
};

int count(struct node *);

int main(void)
{
	int elems = 0;
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

	printf("The first data in the list is %d.\n", head->data);
	printf("The second data in the list is %d.\n", head->ptn->data);
	printf("The third data in the list is %d.\n", head->ptn->ptn->data);

	elems = count(head);
	printf("The number of nodes is %d.\n", elems);

	// Free memory
	struct node *ptr;
	while (head != NULL)
	{
		ptr = head->ptn;
		free(head);
		head = ptr;
	}
	return (0);
}

int count(struct node *head)
{
	int num = 0;

	if (head == NULL)
		printf("The list is empty");
	
	struct node *ptr = NULL;

	ptr = head;

	while (ptr != NULL)
	{
		num++;
		ptr = head->ptn;
	}
	return (num);
}
