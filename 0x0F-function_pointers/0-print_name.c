#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - Function the name
 * @name: Parameter
 * @f: Pointer to function
 * Return : Return void
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
