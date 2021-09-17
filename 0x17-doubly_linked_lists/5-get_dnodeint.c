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
	dlistint_t *vodka = head;
	unsigned int count = 0;

	while (vodka->next != NULL)
	{
		if (count == index)
		{
			break;
		}
		vodka = vodka->next;
		count++;
	}
	if (vodka->next == NULL)
		return (NULL);
	return(vodka);
}
