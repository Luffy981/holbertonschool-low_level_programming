#include "lists.h"
/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: head
 *
 * Return: Return- count
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = *head;
	listint_t *ptr;

	if ((*head)->next != NULL)
	{
		ptr = *head;
		*head = reverse_listint(&((*head)->next));
	} else
	{
		return (node);
	}
	node = ptr->next;
	while (node->next != NULL)
	{
		node = node->next;
	}
	node->next = ptr;
	ptr->next = NULL;
	return (*head);
}
