#include "lists.h"
/**
 * free_listint - function to free memory
 * @head: head
 *
 * Return: Return count
 */
void free_listint(listint_t *head)
{
	if (!head)
	{
		return;
	}
	if (head->next)
	{
		free_listint(head->next);
	}
	free(head);
}
