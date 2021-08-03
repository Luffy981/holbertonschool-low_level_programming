#include "lists.h"
/**
 * add_node_end - function to add a node at the end of the string
 * @head: Pointer to head
 * @str: string
 *
 * Return: Return count
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *new2 = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
		*head  = new;
	else
	{
		while (new2 != NULL && new2->next != NULL)
		{
			new2 = new2->next;
		}
		new2->next = new;
	}
		return (new2);
}
