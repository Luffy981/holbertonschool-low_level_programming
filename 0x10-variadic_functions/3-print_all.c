#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * _strlen    - function to calculate string length
 * @str: String
 * Return: Return value
 */
int _strlen(char const *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}
/**
 * print_all - function that prints anything
 * @format: Parameter
 */
void print_all(const char * const format, ...)
{
	va_list p;
	int i = 0;
	char *text;
	int count = _strlen(format);

	va_start(p, format);

	while (i < count)
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(p, int));
			break;
		case 'i':
			printf("%d", va_arg(p, int));
			break;
		case 'f':
			printf("%f", va_arg(p, double));
			break;
		case 's':
			text = va_arg(p, char*);
			if (text == NULL)
				printf("%s", "(nil)");

			printf("%s", text);
			break;
		}

		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		     format[i] == 's') && i < count - 1)
			printf(", ");

		i++;
	}

	printf("\n");

	va_end(p);
}
