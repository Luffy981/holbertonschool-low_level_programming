#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @index : index of the node, starting at 0
 * @head: Pointer to  head list
 *
 * Return: Return count
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	listint_t *h = head;
	unsigned int n = 0;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (h)
	{
		h = h->next;
		count++;
	}
	if (count < index)
		return (NULL);
	while (n < index && ptr != NULL)
	{
		ptr = ptr->next;
		n++;
	}
	return (ptr);
}
