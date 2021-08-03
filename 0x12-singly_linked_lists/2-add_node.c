#include "lists.h"
/**
 * add_node - function to print a string with hexadecimal characaters
 * @head: Double pointer to the head nodo
 * @str: String
 *
 * Return: Return count
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
