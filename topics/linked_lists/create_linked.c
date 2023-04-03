#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *ptl;
};

int main(void)
{
	/*creating nodes*/
	struct node *head = NULL;

	head = malloc(sizeof(struct node));
	head->data = 26;
	head->ptl = NULL;

	struct node *new = malloc(sizeof(struct node));

	new->data = 27;
	new->ptl = NULL;
	head->ptl = new;

	struct node *new2 = malloc(sizeof(struct node));

	new2->data = 28;
	new2->ptl = NULL;
	head->ptl->ptl = new2;

	new2 = malloc(sizeof(struct node));
	
	new2->data = 29;
	new2->ptl = NULL;

	head->ptl->ptl->ptl = new2;

	new2 = malloc(sizeof(struct node));

	new2->data = 30;
	new2->ptl = NULL;

	head->ptl->ptl->ptl->ptl = new2;

	/*printing the contents of the nodes one by one*/
	printf("content in the node is %d.\n", head->data);
	printf("content in the new node is %d.\n", head->ptl->data);
	printf("content in the second new node is %d.\n", head->ptl->ptl->data);
	printf("content in the third new node is %d.\n", head->ptl->ptl->ptl->data);
	printf("content in the fourt new node is %d.\n", head->ptl->ptl->ptl->ptl->data);

	/*printing the contents of the nodes using a while loop*/

	printf("Printing the contents of the nodes using a loop.\n");

	struct node *temp = NULL;

	temp = head;

	while (temp != NULL)
	{
		printf("this node contains %d.\n", temp->data);
		temp = temp->ptl;
	}

	/*counting the number of nodes*/

	int count = 0;

	if (head == NULL)
	{
		printf("The linked list is empty");
	}
	else
	{
		temp = head;

		while (temp != NULL)
		{
			count++;
			temp = temp->ptl;
		}
		printf("The number of nodes created is %d.\n", count);
	}

	return (0);
}
