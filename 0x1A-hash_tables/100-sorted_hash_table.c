#include "hash_tables.h"
/**
 * shash_table_create - hash table create function
 * @size: size of HT
 *
 * Return: hash value
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_table = NULL;

	if (size <= 0)
		return (0);
	hash_table = malloc(sizeof(shash_table_t));
	if (!hash_table)
		return (NULL);
	hash_table->size = size;
	hash_table->array = calloc(size, sizeof(shash_node_t *));
	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}
	hash_table->shead = NULL;
	hash_table->stail = NULL;
	return (hash_table);
}
/**
 * shash_table_set - set a new php hash table node to the ll
 * @ht: key
 * @key: key
 * @value: size
 *
 * Return: index
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *hash_node = NULL;
	shash_node_t *new_node = NULL;
	char *new_key = NULL;
	char *new_value = NULL;
	unsigned long int hash_idx;

	if (!key || !ht || !value)
		return (0);
	hash_idx = key_index((const unsigned char *)key, ht->size);
	hash_node = ht->array[hash_idx];
	new_value = strdup(value);
	while (hash_node)
	{
		if (strcmp(hash_node->key, key) == 0)
		{
			free(hash_node->value);
			hash_node->value = new_value;
			return (1);
		}
		hash_node = hash_node->next;
	}
	new_key = strdup(key);
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->value = new_value;
	new_node->key = new_key;
	new_node->next = ht->array[hash_idx];
	ht->array[hash_idx] = new_node;
	new_node->sprev = NULL;
	new_node->snext = NULL;
	sorted_list(ht, new_node);
	return (1);
}
/**
 * sorted_list - link the new_node to the double linked list
 * @ht: hash table
 * @new_node: new_node to vincule
 *
 * Return: void
 */
void sorted_list(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *next_hash = NULL;
	shash_node_t *hash_node = NULL;

	if (!ht->shead || strcmp(new_node->key, ht->shead->key) <= 0)
	{
		new_node->snext = ht->shead;
		if (ht->shead)
			ht->shead->sprev = new_node;
		if (!(ht->stail))
			ht->stail = new_node;
		ht->shead = new_node;
		return;
	}
	hash_node = ht->shead;
	next_hash = hash_node->snext;
	while ((next_hash) && (strcmp(new_node->key, next_hash->key) > 0))
	{
		hash_node = hash_node->snext;
		next_hash = next_hash->snext;
	}
	new_node->snext = next_hash;
	new_node->sprev = hash_node;
	hash_node->snext = new_node;
	if (next_hash)
		next_hash->sprev = new_node;
	else
		ht->stail = new_node;
}
/**
 * shash_table_get - retrieves the value of the key in the ht
 * @ht: hash table
 * @key: key which will search its value
 *
 * Return: index
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *hash_node = NULL;
	unsigned long int key_idx;

	if (!ht || !key)
		return (NULL);
	key_idx = key_index((const unsigned char *)key, ht->size);
	hash_node = ht->array[key_idx];
	while (hash_node)
	{
		if (strcmp(hash_node->key, key) == 0)
		{
			return (hash_node->value);
		}
		hash_node = hash_node->next;
	}
	return (NULL);
}


/**
 * shash_table_print - print a hash table from the double linked list
 * @ht: hash table
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	int flag = 0;
	shash_node_t *actual_node = NULL;

	if (!ht || !(ht->array))
		return;
	actual_node = ht->shead;
	printf("{");
	while (actual_node)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", actual_node->key, actual_node->value);
		actual_node = actual_node->snext;
		flag = 1;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print a hash table from the double linked list
 * @ht: hash table
 *
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	int flag = 0;
	shash_node_t *actual_node = NULL;

	if (!ht || !(ht->array))
		return;
	actual_node = ht->stail;
	printf("{");
	while (actual_node)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", actual_node->key, actual_node->value);
		actual_node = actual_node->sprev;
		flag = 1;
	}
	printf("}\n");
}

/**
 * shash_table_delete - function that deletes a hash table
 * @ht: Hash table
 *
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *hash_node = NULL;
	unsigned long int i = 0;

	while (i < ht->size)
	{
		hash_node = ht->array[i];
		if (hash_node)
		{
			free_slist(hash_node);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}

/**
 * free_slist - Function to free list
 * @head: head of the list
 *
 */
void free_slist(shash_node_t *head)
{
	if (!head)
		return;
	else if (head->next)
		free_slist(head->next);
	free(head->value);
	free(head->key);
	free(head);
}
