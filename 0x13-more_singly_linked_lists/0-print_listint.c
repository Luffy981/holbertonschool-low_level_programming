#include "lists.h"
/**
 * print_listint - function to print all the elements of a listint_t list
 * @h: Pointer of type list_t
 *
 * Return: Return count
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *new = h;
	int count = 0;

	while (new)
	{
		printf("%d\n", new->n);
		new = new->next;
		count++;
	}
	return (count);
}
