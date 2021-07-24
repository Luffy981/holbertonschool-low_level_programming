#include <stdio.h>
#include <stdarg.h>
/**
 * _strlen    - function to calculate string length
 * @cadena: String
 * Return: Return value
 */
int _strlen(char const *cadena)
{
	int i = 0;

	while (cadena[i] != '\0')
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
	va_list ap;
	int i = 0;
	char *texto;
	int count = _strlen(format);

	va_start(ap, format);

	while (i < count)
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			texto = va_arg(ap, char*);
			if (texto == NULL)
				printf("%s", "(nil)");
			if (texto != NULL)
				printf("%s", texto);
			break;
		}

		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		     format[i] == 's') && i < count - 1)
			printf(", ");

		i++;
	}

	printf("\n");

	va_end(ap);
}
