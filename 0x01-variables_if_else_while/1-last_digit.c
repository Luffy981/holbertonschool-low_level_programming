#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Function main
 * Return: Return value "n"
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	n %= 10;
	if (n > 5)
	{
		printf("Last digit of %d and is greater than 5\n", n);
	} else if (n == 0)
	{
		printf("Last digit of %d and is 0\n", n);
	} else if (n < 6 && n != 0)
	{
		printf("Last digit of %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
