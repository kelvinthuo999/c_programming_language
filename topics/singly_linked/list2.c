#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *ptl;
};

int main(void)
{
	struct node *head;

	head = malloc(sizeof(struct node));
	head->data = 27;
	head->ptl = NULL;

	struct node *node2 = malloc(sizeof(struct node));

	node2->data = 28;
	node2->ptl = NULL;
	head->ptl = node2;

	printf("The data in the first node %d.\n", head->data);
	printf("The data in the second node %d.\n", node2->data);

	return (0);
}
