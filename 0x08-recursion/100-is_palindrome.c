#include "holberton.h"
/**
 * is_palindrome - function returns 1 if a string is a palindrome and 0 if not
 * isPalRec - Function to recursion
 * _strlen_recursion - Functio to return string length
 * @str: Parameter
 * @s: Parameter
 * @e: Parameter
 * Return: Return value
 */
int isPalRec(char str[], int s, int e)
{
	/* If there is only one character*/
	if (s == e)
		return (1);

	/* If first and last*/
	/* characters do not match*/
	if (str[s] != str[e])
		return (0);

	/* If there are more than*/
	/* two characters, check if*/
	/* middle substring is also*/
	   /* palindrome or not.*/
	if (s < e + 1)
		return (isPalRec(str, s + 1, e - 1));

	return (1);
}


int is_palindrome(char str[])
{
	int n = _strlen_recursion(str);

/* An empty string is*/
/* considered as palindrome*/
	if (n == 0)
		return (1);

	return (isPalRec(str, 0, n - 1));
}
int _strlen_recursion(char str[])
{
	if (*str)
	{
		return (1 + _strlen_recursion(str + 1));
	}
	return (0);
}
