#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * e_s - Function to evalue string if is a digit
 * @s: Parameter
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
 * main - Function
 * @argc: Parameter
 * @argv: Parameter
 * Return: Return value
 */
int main(int argc, char *argv[])
{
	int mult = 1;
	int i;

	if (argc == 3)
	{
		for (i = 1 ; i < argc ; i++)
		{
			if (e_s(argv[i]) == 1)
			{
				printf("Error\n");
				exit(98);
				return (0);
			}
			mult = atoi(argv[i]) * mult;
		}
		printf("%d\n", mult);
		return (0);
	}
	printf("Error\n");
	exit(98);
	return (0);
}
