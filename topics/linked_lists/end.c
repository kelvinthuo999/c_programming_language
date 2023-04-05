#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *ptl;
}list;

void add_end(list **head, int val);
void print_data(list *head);
int main(void)
{
	list *head = NULL;

	add_end(&head, 26);
	add_end(&head, 27);
	add_end(&head, 28);

	print_data(head);

	return (0);
}

void add_end(list **head, int val)
{
	list *node = malloc(sizeof(list));

	if (node == NULL)
	{
		printf("no memory for node");
	}
	else
	{
		node->data = val;
		node->ptl = NULL;
	}

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		list *temp = *head;

		while (temp->ptl != NULL)
		{
			temp = temp->ptl;
		}
		temp->ptl = node;
	}
}

void print_data(list *head)
{
	list *temp = head;
	
	while (temp != NULL)
	{
		printf("%d \t", temp->data);
		temp = temp->ptl;
	}
	printf("NULL\n");
}
