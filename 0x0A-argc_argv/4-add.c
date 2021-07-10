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
			a = a + 1;
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
	int sum = 0;
	int i;

	if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			if (e_s(argv[i]) == 1)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	printf("0\n");
	return (0);
}
