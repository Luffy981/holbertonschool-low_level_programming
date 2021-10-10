#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: Hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *hash_node = NULL;
	unsigned long int i = 0;

	while (i < ht->size)
	{
		hash_node = ht->array[i];
		if (hash_node)
		{
			free_list(hash_node);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
/**
 * free_list - Function to free list
 * @head: head of the list
 *
 */
void free_list(hash_node_t *head)
{
	if (!head)
		return;
	else if (head->next)
		free_list(head->next);
	free(head->value);
	free(head->key);
	free(head);
}
