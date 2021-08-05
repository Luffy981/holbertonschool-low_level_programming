#include "lists.h"
listint_t *reverse_listint(listint_t **head)
{
	listint_t **ptr = **head;
	if(!(*head))
		return(NULL);
	else if((*ptr))
	{
		reverse_listint(&(*ptr)->next);
	}
	*head = *ptr;
	return(ptr);
}
