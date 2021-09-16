#include "lists.h"
size_t print_dlistint(const dlistint_t *h)
{
    dlistint_t *vodka = h;
    int count = 0;
    
    while (vodka->next != NULL)
    {
        vodka = vodka->next;
        count++;
    }
}
