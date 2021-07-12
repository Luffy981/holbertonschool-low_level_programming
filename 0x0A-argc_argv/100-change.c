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
	int  cent[] = {25, 10, 5, 2, 1};
	int a = 0;
	int r = 0;
	int m;

	if (argc == 2)
	{
		if (e_s(argv[1]) == 2 || e_s(argv[1]) == 1)
		{
			printf("0\n");
			return (0);

		} else if (e_s(argv[1]) == 0)
		{
			m = atoi(argv[1]);
			while (cent[a] != '\0' && m > 0)
			{
				while (m - cent[a] >= 0)
				{
					m = m - cent[a];
					r += 1;
				}
				a++;
			}
			printf("%d\n", r);
			return (0);
		}
	}
	printf("Error\n");
	return (1);
}
