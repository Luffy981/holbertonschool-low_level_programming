#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key
 * @key: is the key
 * @size: is the size of the array of the hash table
 * Return: The key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int ky_index;
	/* we can divide by 0 & the algorithm doesn't work when key = 0 */
	if (key == 0 || size == 0)
		return (0);
	ky_index = hash_djb2(key) % size;
	return (ky_index);
}
