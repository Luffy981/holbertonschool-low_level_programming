#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 * @ht: Hash table
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hash_node = NULL;
	unsigned long int i = 0;

	if (!ht)
		return;
	putchar('{');
	while (i < ht->size)
	{
		hash_node = ht->array[i];
		while (hash_node)
		{
			printf("'%s': '%s'", hash_node->key, hash_node->value);
			hash_node = hash_node->next;
		}
		i++;
	}
	putchar('}');
	putchar('\n');
}
