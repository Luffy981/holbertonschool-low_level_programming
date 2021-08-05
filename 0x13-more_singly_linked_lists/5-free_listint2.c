#include "lists.h"
/**
 * free_listint - function to free memory
 * @head: head
 *
 * Return: Return count
 */
void free_listint(listint_t *head)
{
	if (head->next)
	{
		free_listint(head->next);
	}
	free(head);
}
/**
 * free_listint2 - function to free memory
 * @head: head
 *
 * Return: Return count
 */
void free_listint2(listint_t **head)
{
	listint_t *p = *head;

	if (!(*head))
	{
		return;
	}
	free_listint(p);
	*head = NULL;
}
