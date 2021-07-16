#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - Function to reallocates a memory block using malloc and free
 * @old_size: Is the size, in bytes, of the allocated space for ptr
 * @new_size: Is the new size, in bytes of the new memory block
 * @ptr : Parameter
 * Return: Return ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	ptr = malloc(old_size);/*Reserve memory*/
	if (ptr == NULL)/*Check malloc*/
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
		return (ptr);
	}
	if (old_size == new_size)/*If new_size == old_size do not
				  *do anything and return ptr
				  */
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)/*If new_size is equal to zero,
					   *and ptr is not NULL, then the call
					   *is equivalent to free(ptr).
					   *Return NULL
					   */
	{
		free(ptr);/*Free amemory reserved*/
		return (NULL);
	}
	ptr = realloc(ptr, new_size);/*Reserve memory again*/
	if (ptr == NULL)/*Check malloc again */
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
