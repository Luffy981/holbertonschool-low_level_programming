#include "lists.h"
/**
 * free_dlistint - function to add elements to list
 * @head: Pointer of type list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	if (head == NULL)
	{
		return;
	}
	free_dlistint(head->next);
	free(tmp);
}
