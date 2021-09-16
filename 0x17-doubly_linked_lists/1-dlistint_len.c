#include "lists.h"
/**
 * print_dlistint - function to print all the elements of a list_t list
 * @h: Pointer of type list_t
 *
 * Return: Return count
 */
size_t dlistint_len(const dlistint_t *h);
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
