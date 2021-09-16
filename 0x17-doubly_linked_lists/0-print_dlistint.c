#include "lists.h"
/*
 * print_dlistint - function to print all the elements of a list_t list
 * @h: Pointer of type list_t
 *
 * Return: Return count
 */
size_t print_dlistint(const dlistint_t *h)
{
    int count = 0;
    
    while (h != NULL)
    {
        printf("%d", h->n);
        h = h->next;
        count++;
    }
    return (count);
}
