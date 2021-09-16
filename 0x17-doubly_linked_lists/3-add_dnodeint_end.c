#include "lists.h"
/**
 * add_dnodeint_end - function to add elements to list
 * @head: Pointer of type list_t
 * @n: Pointer of type list_t
 *
 * Return: Return count
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *vodka = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head != NULL)
	{
		while (vodka->next != NULL)
		{
			vodka = vodka->next;
		}
		vodka->next = new_node;
	} else
	{
		*head = new_node;
	}
	new_node->prev = vodka;
	return (*head);
}
