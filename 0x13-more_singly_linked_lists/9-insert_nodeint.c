#include "lists.h"
/**
 * insert_nodeint_at_index - function insert node at index
 * @idx : index of the node, starting at 0
 * @head: Pointer to  head list
 * @n: number
 *
 * Return: Return count
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *node = *head;
	listint_t *ar;
	listint_t *h = *head;
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
		newnode = malloc(sizeof(listint_t));
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
		newnode = malloc(sizeof(listint_t));
		if (newnode == NULL)
			return (NULL);
		newnode->n = n;
		newnode->next = ar;
		node->next = newnode;
	}
	return (newnode);
}
