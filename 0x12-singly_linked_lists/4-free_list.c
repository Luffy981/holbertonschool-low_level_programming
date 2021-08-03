#include "lists.h"
/**
 * free_list - function to free memory
 * @head: head
 *
 * Return: Return count
 */
void free_list(list_t *head)
{
	if (!head)
	{
		return;
	}
	if (head->next)
	{
		free_list(head->next);
	}
	free(head->str);
	free(head);
}
