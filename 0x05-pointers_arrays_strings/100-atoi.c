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
	unsigned int d;

	sign = 1;
	i = 0;
	while (!(s[i] >= '0' && s[i] <= '9'))
	{
		if (s[i] == 45)
		{
			sign *= (-1);
		}
		i++;
	}
	d = 0;
	a = 0;
	while (s[a] != '\0')
	{
		if (s[a] >= '0' && s[a] <= '9')
		{
			d = (s[a] - '0') + d * 10;
		}
		a++;
	}
	return (d * sign);
}
