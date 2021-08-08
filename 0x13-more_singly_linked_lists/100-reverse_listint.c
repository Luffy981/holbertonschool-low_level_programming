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
	if((*head)->next != NULL)
	{
		*head = reverse_listint(&((*head)->next));
	}
	node->next=head;
	return(*head);
}
