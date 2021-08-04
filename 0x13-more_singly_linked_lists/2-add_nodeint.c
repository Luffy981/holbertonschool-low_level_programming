#include "lists.h"
/**
 * add_nodeint - function to add a node
 * @head: Double pointer to the head nodo
 * @n: String
 *
 * Return: Return count
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
