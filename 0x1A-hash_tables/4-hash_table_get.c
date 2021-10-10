#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: Hash table
 * @key: key to search
 * Return: Return hash node value in success or NULL in failure
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{

	hash_node_t *hash_node = NULL;
	unsigned long int idx;

	if (!key || !ht)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	hash_node = ht->array[idx];
	while (hash_node)
	{
		if (strcmp(hash_node->key, key) == 0)
			break;
		hash_node = hash_node->next;
	}
	if (!hash_node)
		return (NULL);
	return (hash_node->value);
}
