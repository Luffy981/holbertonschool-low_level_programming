#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - Function to sum 2 numbers
 * @a: Size of array
 * @b: Pointer to function
 * Return: Return sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Function to substrack 2 number
 * @a: Size of a
 * @b: Pointer to function
 * Return: Return substrack
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Function to multiply  2 number
 * @a: Size of a
 * @b: Pointer to function
 * Return: Return multiply
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Function to divide 2 number
 * @a: Size of a
 * @b: Pointer to function
 * Return: Return divide
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Function to modul 2 number
 * @a: Size of a
 * @b: Pointer to function
 * Return: Return modul
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
