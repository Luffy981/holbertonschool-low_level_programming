#include "holberton.h"
/**
 * _atoi - Function to print a integer with sign
 * @s: Parameter
 * Return: return value
 */
int _atoi(char *s)
{
	int i;
	int a;
	int sign;
	int c;

	sign = 1;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == 45)
		{
			sign *= (-1);
		}
		i++;
	}
	c = 0;
	a = 0;
	while (s[a] != '\0')
	{
		if (s[a] >= '0' && s[a] <= '9')
		{
			c = (s[a] - '0') + c * 10;
		}
		a++;
	}
	c = c * (sign);
	return (c);
}
