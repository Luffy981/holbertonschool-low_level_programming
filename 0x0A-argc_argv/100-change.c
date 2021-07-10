#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * e_s - function to analyze if there is a character inside the string argument
 * @s: Parameter The number of command line arguments
 * Return: Return value
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
		if (!(isdigit(s[a])))
		{
			return (1);
		}
		a++;
	}
	return (0);
}
/**
 * main - Function to print the file name
 * @argc: Parameter The number of command line arguments
 * @argv: Parameter An array containing the program command line arguments
 * Return: Return value
 */
int main(int argc, char *argv[])
{
	int i, a = 25, b = 10, c = 5, d = 2, e = 1, cent;

	if (argc == 2)
	{
		for (i = 1 ; i < argc ; i++)
		{
			if (e_s(argv[i]) == 2 || e_s(argv[i]) == 1)
			{
				printf("0\n");
				return (0);
			} else if (e_s(argv[i]) == 0)
			{
				cent = atoi(argv[i]);
				if (cent % a == 0)
				{
					printf("%d\n", cent / a);
				} else if (cent % b == 0)
				{
					printf("%d\n", cent / b);
				} else if (cent % c == 0)
				{
					printf("%d\n", cent / c);
				} else if (cent % d == 0)
				{
					printf("%d\n", cent / d);
				} else if (cent % e == 0)
				{
					printf("%d\n", cent / e);
				}
				return (0);
			}
		}
	}
	printf("Error\n");
	return (1);
}
