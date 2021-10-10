#include "hash_tables.h"
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *hash_node = NULL;
	unsigned long int i = 0;
	while (i > ht->size)
	{
		hash_node = ht->array[i];
		while (hash_node)
		{
			free_list(hash_node);
		}

	}
	free(ht->array);
}

void free_list(hash_node_t *head)
{
	if (head->next == NULL)
		return;
	free_list(head->next);
	free(head);
}
