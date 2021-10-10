/*
 * =====================================================================================
 *
 *       Filename:  test_hash.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/10/21 18:29:42
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;

unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int idx = 0;
    hash_node_t *hash_node = NULL, *new_node = NULL;
    char *new_value = NULL, *new_key = NULL;

    if (!ht || !(ht->array) || !key || !key[0])
        return (0);

    idx = key_index((const unsigned char *)key, ht->size);
    new_value = strdup(value);
    if (!new_value)
        return (0);
    hash_node = ht->array[idx];
    while (hash_node)
    {
        if (!strcmp(hash_node->key, key))
        {
            free(hash_node->value);
            hash_node->value = new_value;
            return (1);
        }
        hash_node = hash_node->next;
    }
    new_node = malloc(sizeof(hash_node_t));
    if (!new_node)
    {
        free(new_value);
        return (0);
    }
    new_key = strdup(key);
    if (!new_key)
    {
        free(new_node);
        free(new_value);
        return (0);
    }
    new_node->key = new_key;
    new_node->value = new_value;
    new_node->next = ht->array[idx];
    ht->array[idx] = new_node;
    return (1);
}

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int ky_index;
    /* we can divide by 0 & the algorithm doesn't work when key = 0 */
    if (key == 0 || size == 0)
        return (0);
    ky_index = hash_djb2(key) % size;
    return (ky_index);
}

unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int c;

    hash = 5381;
    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }
    return (hash);
}

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_table = NULL;

    if (size <= 0)
        return (NULL);
    hash_table = malloc(sizeof(hash_table_t) * 1);
    if (hash_table == NULL)
        return (NULL);
    hash_table->size = size;
    hash_table->array =  calloc(size, sizeof(hash_node_t *));
    if (hash_table->array == NULL)
    {
        free(hash_table);
        return (NULL);
    }
    return (hash_table);
}
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    return (EXIT_SUCCESS);
}
