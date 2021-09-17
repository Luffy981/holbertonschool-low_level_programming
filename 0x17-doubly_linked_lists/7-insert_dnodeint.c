#include "lists.h"
/**
 * insert_nodeint_at_index - function insert node at index
 * @idx : index of the node, starting at 0
 * @head: Pointer to  head list
 * @n: number
 *
 * Return: Return count
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *newnode;
	dlistint_t *node = *head;
	dlistint_t *ar;
	dlistint_t *h = *head;
	unsigned int i = 0;
	unsigned int count = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	while (h)
	{
		h = h->next;
		count++;
	}
	if (count < idx)
		return (NULL);
	if (idx == 0)
	{
		newnode = malloc(sizeof(dlistint_t));
		if (newnode == NULL)
			return (NULL);
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
	} else
	{
		while (i < idx - 1)
		{
			node = node->next;
			i++;
		}
		ar = node->next;
		newnode = malloc(sizeof(dlistint_t));
		if (newnode == NULL)
			return (NULL);
		newnode->n = n;
		newnode->next = ar;
		node->next = newnode;
	}
	return (newnode);
}
