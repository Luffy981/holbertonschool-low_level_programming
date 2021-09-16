#include "lists.h"
/**
 * add_dnodeint - function to add elements to list
 * @head: Pointer of type list_t
 * @n: Pointer of type list_t
 *
 * Return: Return count
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (new_node->next != NULL)
	{
		new_node->next->prev = new_node;
	}
	*head = new_node;
	return (*head);
}
