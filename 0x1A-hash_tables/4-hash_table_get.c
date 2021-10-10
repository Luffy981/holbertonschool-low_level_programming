#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{

	unsigned long int idx;

	hash_node_t *hash_node = NULL;
	idx = key_index((const unsigned char *)key, ht->size);
	hash_node = ht->array[idx];
	while (strcmp(hash_node->key, key) != 0 && hash_node)
	{
		hash_node = hash_node->next;
	}
	if (!hash_node)
		return (NULL);
	return (hash_node->value);
}
