#include "main.h"

/**
 * rot13 - Function to rot
 * @string: Parameter
 * Return: return value
 */

char *rot13(char *string)
{
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *ptr1 = NULL;
	char *ptr2 = NULL;
	char *string1 = string;

	while (*string1 != '\0')
	{
		for (ptr1 = input, ptr2 = output; *ptr1 != '\0'; ptr1++, ptr2++)
		{
			if (*string1 == *ptr1)
			{
				*string1 = *ptr2;
				break;
			}
		}
		string1++;
	}
	return (string);

}
