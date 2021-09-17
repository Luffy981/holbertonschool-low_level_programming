#include "lists.h"
/**
 * sum_dlistint - function returns the sum of all the data (n) of a linked list
 * @head: Pointer to  head list
 *
 * Return: Return count
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
