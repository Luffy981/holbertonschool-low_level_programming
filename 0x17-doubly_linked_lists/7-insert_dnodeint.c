#include "lists.h"
/**
 * insert_dnodeint_at_index - function insert node at index
 * @idx : index of the node, starting at 0
 * @head: Pointer to  head list
 * @n: number
 *
 * Return: Return count
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n) {
	unsigned int i;
	dlistint_t *current, *new;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *h;
		for (i = 0; i < idx - 1 && current != NULL; i++)
		{
			current = current->next;
		}
		if (current == NULL)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (new);
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
