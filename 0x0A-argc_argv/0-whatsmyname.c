#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function to print the file name
 * @argc: Parameter The number of command line arguments
 * @argv: Parameter An array containing the program command line arguments
 * Return: Return value
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
