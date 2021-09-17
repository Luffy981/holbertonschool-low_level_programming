#include "lists.h"
/**
 * get_dnodeint_at_index  - function to add elements to list
 * @head: Pointer of type list_t
 * @index: Pointer of type list_t
 *
 * Return: Return count
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
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
