#include <stdlib.h>
typedef struct shash_node_s
{
     char *key, *value;
     struct shash_node_s *next, *sprev, *snext;
} shash_node_t;
typedef struct shash_table_s
{
     unsigned long int size;
     shash_node_t **array, *shead, *stail;
} shash_table_t;
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *hash_table = NULL;
    hash_table = malloc(sizeof(shash_table_t));
    hash_table->size = size;
    hash_table->array = calloc(size, sizeof(shash_node_t *));
    hash_table->shead = NULL, hash_table->stail = NULL;
    return (hash_table);
}
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    shash_node_t *hash_node = NULL, *new_node = NULL;
    char *new_key = NULL, *new_value = NULL;
    unsigned long int hash_idx;
    hash_idx = key_index((const unsigned char *)key, ht->size);
    hash_node = ht->array[hash_idx],new_value = strdup(value);
    while (hash_node)
    {
        if (strcmp(hash_node->key, key) == 0)
        {
            free(hash_node->value),hash_node->value = new_value;
            return (1);
        }
        hash_node = hash_node->next;
    }
    new_key = strdup(key);
    new_node = malloc(sizeof(shash_node_t));
    if (new_node == NULL)
        return (0);
    new_node->value = new_value,new_node->key = new_key,new_node->next = ht->array[hash_idx],ht->array[hash_idx] = new_node;
    new_node->sprev = NULL,new_node->snext = NULL,sorted_list(ht, new_node);
    return (1);
}
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
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int ky_index;
    if (key == 0 || size == 0)
        return (0);
    ky_index = hash_djb2(key) % size;
    return (ky_index);
}
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash = 5381;
    int c;
    while ((c = *str++))
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    return (hash);
}
int main(void)
{
    shash_table_t *ht;
    ht = shash_table_create(2);
    shash_table_set(ht, "a", "6");
    shash_table_set(ht, "j", "1");
    shash_table_set(ht, "y", "0");
    return (EXIT_SUCCESS);
}
