#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *ptn;
};

void count(struct node *);

int main(void)
{
	struct node *head = malloc(sizeof(struct node));

	head->data = 26;
	head->ptn = NULL;

	struct node *block = malloc(sizeof(struct node));

	block->data = 27;
	block->ptn = NULL;

	block = malloc(sizeof(struct node));

	block->data = 28;
	block->ptn = NULL;

	head->ptn->ptn = block;

	printf("The first data in the list is %d.\n", head->data);
	printf("The second data in the list is %d.\n", head->ptn->data);
	printf("The third data in the list is %d.\n", head->ptn->ptn->data);

	/*count(head);*/

	return (0);
}

/*void count(struct node *head)
{
	int num = 0;

	if (head == NULL)
		printf("The list is empty");
	
	struct node *ptr;

	ptr = head;

	while (ptr != NULL)
	{
		num++;
		ptr = head->ptn;
	}
	printf("The number of nodes in the list is %d.\n", num);
}*/
