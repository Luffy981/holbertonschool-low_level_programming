#include "holberton.h"
#include <stdlib.h>
/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;

	} while (*s++);

	return (num * sign);
}
/**
 * _isdigit - function to check if it is a number
 * @c: Parameter
 * Return: Return Value
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
/**
 * e_s - Function to evalue string if is a number
 * @s: Parameter
 * Return: Return value "n"
 */
int e_s(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		if (a == 0 && s[a] == '-')
		{
			return (2);
		}
		if (_isdigit(s[a]) == 0)
		{
			return (1);
		}
		a++;
	}
	return (0);
}
/**
 * _strlen - Function to string length
 * @s: Parameter
 * Return: Return value "n"
 */

int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
	{
		return (0);
	}
	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
/**
 * print_number - Function to print a integer number
 * @n: Parameter
 * Return: Return value "n"
 */
void print_number(int n)
{
	int b, i, f, t;
	unsigned int num;
	unsigned int r;

	f = 1;
	b = 1;
	if (n < 0)
	{
		_putchar('-');
		num = -n;
	} else
	{
		num = n;
	}
	r = num;
	while (num / 10 >= 1)/*contador de digitos = b */
	{
		num = num / 10;
		b++;
	}
	for (i = 1 ; i < b ; i++)/*potencia de 10*/
	{
		f *= 10;
	}
	while (b >= 1)/*imprime digitos de izquierda a derecha*/
	{
		t = (r / f) % 10;
		f = f / 10;
		_putchar(t + '0');
		b--;
	}
}
/**
 * main - Function
 * @argc: Parameter
 * @argv: Parameter
 * Return: Return value
 */
int main(int argc, char *argv[])
{
	int mult = 1;
	int i;
	int j;
	char er[] = "Error\n";

	if (argc == 3)
	{
		for (i = 1 ; i < argc ; i++)
		{
			if (e_s(argv[i]) == 1 || e_s(argv[i]) == 2)
			{
				for (j = 0 ; j < _strlen(er) ; j++)
				{
					_putchar(er[j]);
				}
				exit(98);
				return (0);
			}
			mult = _atoi(argv[i]) * mult;
		}
		print_number(mult);
		_putchar('\n');
		return (0);
	}
	for (j = 0 ; j < _strlen(er) ; j++)
	{
		_putchar(er[j]);
	}
	exit(98);
	return (0);
}
