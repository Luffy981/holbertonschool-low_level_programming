#include "lists.h"
/**
 * free_listint2 - function to free memory
 * @head: head
 *
 * Return: Return count
 */
void free_listint2(listint_t **head)
{
	if (head == NULL || (*head) == NULL)
	{
		return;
	}
	if ((*head)->next)
	{
		free_listint2(&((*head)->next));
	}
	free(*head);
	*head = NULL;
}
