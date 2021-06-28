#include "holberton.h"
/**
 * times_table - Function to print table
 */
void print_times_table(int n)
{
	int a;
	int b;
	int c;
	int r;
	int t;
	int i;

	if (n<=15 && n >= 0)
	{
		for (a = 0 ; a <= n ; a++)
		{
			for (b = 0 ; b <= n ; b++)
			{
				c = a * b ;
				if(b !=0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if(a==0 && b != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				if(c!=0 && c<10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(c+'0');
				}else if(c>=10 && c <100)
				{
					r=c/10;
					t=c%10;
					_putchar(' ');
					_putchar(r+'0');
					_putchar(t+'0');
				}else if(c>=100 && c<1000)
				{
					r=(c/100)%10;
					t=(c/10)%10;
					i=c%10;
					_putchar(r+'0');
					_putchar(t+'0');
					_putchar(i+'0');
				}else
				{
					_putchar(c+'0');
				}
			}
			_putchar('\n');
		}
	}
}
