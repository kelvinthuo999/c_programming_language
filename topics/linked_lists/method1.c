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

	struct node *node3 = malloc(sizeof(struct node));

	node3->data = 29;
	node2->ptl = NULL;
	node2->ptl = node3;

	printf("The first item in the list is %d.\n", head->data);
	printf("The second item in the list is %d.\n", node2->data);
	printf("The third item in the list is %d.\n", node3->data);

	return (0);
}
