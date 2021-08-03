#include "lists.h"
/**
 * print_list - function to print all the elements of a list_t list
 * @h: Pointer of type list_t
 *
 * Return: Return count
 */
size_t print_list(const list_t *h)
{
	char *str;
	unsigned int n;
	int count = 0;

	while (h != NULL)
	{
		str = h->str;
		n = h->len;
		if (str == NULL)
		{
			str = "(nil)";
			n = 0;
		}
		printf("[%d] ", n);
		printf("%s\n", str);
		h = h->next;
		count++;
	}
	return (count);
}
