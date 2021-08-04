#include "lists.h"

/**
 * listint_len - function  returns the number of elements in a linked list_tlist
 * @h:  Pointer to new node
 *
 * Return: Return count
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
