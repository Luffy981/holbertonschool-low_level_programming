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
	int mul = 1;

	if (argc == 3)
	{
		for (i = 1 ; i < argc ; i++)
		{
			mul *= atoi(argv[i]);
		}
		return (printf("%d\n", mul));
	}
	printf("Error\n");
	return (1);
}
