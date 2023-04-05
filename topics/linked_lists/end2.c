#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *ptl;
}list;

list* add_end(list *node, int val);
int main(void)
{
	list *head = malloc(sizeof(list));

	head->data = 26;
	head->ptl = NULL;

	list *node = head;

	node = add_end(node, 27);
	node = add_end(node, 28);
	node = add_end(node, 29);

	node = head;

	while (node != NULL)
	{
		printf("%d \n", node->data);
		node = node->ptl;
	}
	return (0);
}

list* add_end(list *node, int val)
{
	list *temp = malloc(sizeof(list));

	temp->data = val;
	temp->ptl = NULL;

	node->ptl = temp;
	return (temp);
}
