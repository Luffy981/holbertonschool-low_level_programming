#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints strings as arguments
 * @n: Array to ecaluate
 * @separator: Array to separate numbers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *name;

	va_start(str, n);
	for (i = 0 ; i < n ; i++)
	{
		name = va_arg(str, char*);
		if (name == NULL)
			printf("(nil)");
		else
			printf("%s", name);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
