#include <stdio.h>
#include "holberton.h"
/**
 * print_diagonal - Function to print \ in diagonal
 * @n: Parameter
 * Return: Return value "n"
 */
int main(void)
{
	char i;
	for ( i = 1 ; i <= 100 ; i++)
	{
		if(i%3==0)
		{
			printf("Fizz");
		}else if (i%5==0)
		{
			printf("Buzz");
		}else if (i%3==0 && i%5==0)
		{
			printf("FizzBuzz");
		}else
		{
			printf("%d",i);
		}
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
