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
	int R;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	R = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, R);
	} else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, R);
	} else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, R);
	}
	return (0);
}
