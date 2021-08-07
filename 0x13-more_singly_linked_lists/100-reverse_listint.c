#include "lists.h"
/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: head
 *
 * Return: Return- count
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node  = *head;
	listint_t *ptr  = *head;
	listint_t *r = NULL;
	int count = 0;

	while (node->next != NULL)
	{
		node = (node)->next;
		count++;
	}
	*head = node;
	while (count > 0)
	{
		r = ptr;
		while ((r->next)->next != NULL)
		{
			r = (r)->next;
		}
		r->next = NULL;
		node->next = r;
		node = r;
		count--;
	}
	return (*head);
}
