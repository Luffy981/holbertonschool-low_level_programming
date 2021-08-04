#include "lists.h"
/**
 * add_nodeint_end - function to add a node at the end of the string
 * @head: Pointer to head
 * @n: Int n
 *
 * Return: Return count
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *newnode = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head != NULL)
	{
		while (newnode->next != NULL)
		{
			newnode = newnode->next;
		}
		newnode->next = node;
	} else
	{
		*head = node;
	}
	return (node);
}
