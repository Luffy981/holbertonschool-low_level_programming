#include "hash_tables.h"
/**
 * hash_table_create - Function to create a Hash table
 * @size: Parameter
 * Return: Return Null fail or new table in success
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t) * size);
	if (table == NULL)
		return (NULL);
	return (table);
}
