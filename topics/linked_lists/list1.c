#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *ptr;
};

int main(void)
{
	struct node *head = NULL;

	head = malloc(sizeof(struct node));

	head->data = 27;
	head->ptr = NULL;

	printf("%d\n", head->data);

	return (0);
}
