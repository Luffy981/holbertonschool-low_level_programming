#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - aFunction main
 * @argc: Parameter
 * @argv: Parameter
 * Return: Return value
 */
int main(int argc, char *argv[])
{
	int b, c;
	char *a = argv[2];

	b = atoi(argv[1]);
	c = atoi(argv[3]);
	if (argv[2][1] != '\0' || argv[2][0] != '+' || argv[2][0] != '-' ||
	    argv[2][0] != '*' || argv[2][0] != '/' || argv[2][0] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if (argc == 4)
	{
		return (printf("%d\n", get_op_func(a)(b, c)));
	}
	printf("Error\n");
	exit(98);
}
