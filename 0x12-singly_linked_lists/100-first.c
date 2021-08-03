#include "lists.h"

/**
 * printf_str - function to print before the main function
 */
void printf_str(void) __attribute__((constructor));

void printf_str(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
