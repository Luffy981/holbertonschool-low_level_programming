#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the number of arguments passed into it
 * @argc: Parameter
 * @argv: Parameter
 * Return: Return value
 */
int main(int argc, char __attribute__ ((unused))*argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
