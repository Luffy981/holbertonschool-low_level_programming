#include "lists.h"
/**
 * delete_nodeint_at_index - function to delete node at index
 * @index : index of the node, starting at 0
 * @head: Pointer to  head list
 *
 * Return: Return count
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *newnode;
	listint_t *node = *head;
	listint_t *ar;
	listint_t *h = *head;
	unsigned int i = 0;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	while (h)
	{
		h = h->next;
		count++;
	}
	if (count < index)
		return (-1);
	while (i < index - 1)
	{
		node = node->next;
		i++;
	}
	ar = node->next;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (-1);
	newnode->next = ar->next;
	node->next = newnode;
	free(ar);
	return (1);
}
