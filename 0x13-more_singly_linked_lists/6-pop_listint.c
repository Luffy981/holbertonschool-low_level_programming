#include "lists.h"
/**
 * pop_listint - function to delete head node
 * @head: Double pointer to the head nodo
 *
 * Return: Return number deleted
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptr;
	listint_t *delete = *head;

	if (*head == NULL)
		return (0);
	ptr = (*head)->next;
	*head = ptr;
	n = delete->n;
	free(delete);
	return (n);
}
