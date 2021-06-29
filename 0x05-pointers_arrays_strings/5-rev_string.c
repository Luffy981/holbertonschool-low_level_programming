#include "holberton.h"
/**
 * rev_string - Function to print a complete string in reverse
 * @s: Parameter
 */
void rev_string(char *s)
{
	int i;
	int a;
	int c;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	a = 0;
	while (a < i)

	{
		i-=1;
		c = s[i];
		s[i] = s[a];
		s[a] = c;
		a++;
	}
}
