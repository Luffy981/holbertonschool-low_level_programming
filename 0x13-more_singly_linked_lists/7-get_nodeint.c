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
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);
	while (n < index)
	{
		ptr = ptr->next;
		n++;
		if (ptr->next == NULL)
			return (NULL);
	}
	return (ptr);
}
