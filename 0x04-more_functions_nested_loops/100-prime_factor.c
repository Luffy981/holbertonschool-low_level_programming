#include <stdio.h>
/**
 * main - Function main
 * Return: Return value "n"
 */
int main(void)
{
	long int a = 612852475143;
	int i;

	for (i = 2 ; a > 1 ; i++)
	{
		while (a % i == 0)
		{
			a = a / i;
		}
	}
	printf("%d\n", i);
	return (0);
}
