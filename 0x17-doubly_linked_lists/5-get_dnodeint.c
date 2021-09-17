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
	unsigned int i;

	for (i = 1; i <= index; i++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
