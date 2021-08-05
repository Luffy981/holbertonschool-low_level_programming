#include "lists.h"
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *node = *head;
	listint_t *ar;
	unsigned int i = 0;
	while(i<idx)
	{
		node = node->next;
		i++;
	}
	ar = node->next;
	newnode = malloc(sizeof(listint_t));
	if(newnode == NULL)
		return(NULL);
	newnode->n = n;
	newnode->next=node;
	node->next=ar;
	return(newnode);
}
