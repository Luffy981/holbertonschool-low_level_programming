#include "function_pointers.h"
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
