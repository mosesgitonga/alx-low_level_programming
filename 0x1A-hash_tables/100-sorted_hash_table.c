#include "hash_tables.h"

void insert_sorted_node(shash_table_t *ht, shash_node_t *node);

/**
 * insert_sorted_node - Inserts a node into a sorted linked list
 * @ht: The sorted hash table
 * @node: The node to insert
 */
void insert_sorted_node(shash_table_t *ht, shash_node_t *node)
{
    shash_node_t *current;

    if (!ht->shead || strcmp(node->key, ht->shead->key) < 0)
    {
        node->snext = ht->shead;
        node->sprev = NULL;
        if (ht->shead)
            ht->shead->sprev = node;
        ht->shead = node;
        if (!ht->stail)
            ht->stail = node;
        return;
    }

    current = ht->shead;
    while (current->snext && strcmp(node->key, current->snext->key) >= 0)
        current = current->snext;

    node->sprev = current;
    node->snext = current->snext;
    if (current->snext)
        current->snext->sprev = node;
    else
        ht->stail = node;
    current->snext = node;
}

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array
 * Return: A pointer to the created hash table, or NULL if it fails
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *ht;
    unsigned long int i;

    ht = malloc(sizeof(shash_table_t));
    if (!ht)
        return NULL;

    ht->size = size;
    ht->array = malloc(sizeof(shash_node_t *) * size);
    if (!ht->array)
    {
        free(ht);
        return NULL;
    }

    for (i = 0; i < size; i++)
        ht->array[i] = NULL;

    ht->shead = NULL;
    ht->stail = NULL;

    return ht;
}

/**
 * shash_table_set - Adds an element to the sorted hash table
 * @ht: The sorted hash table
 * @key: The key
 * @value: The value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    shash_node_t *node, *current;

    if (!ht || !key || !*key || !value)
        return 0;

    index = key_index((const unsigned char *)key, ht->size);
    current = ht->array[index];
    while (current)
    {
        if (strcmp(current->key, key) == 0)
        {
            free(current->value);
            current->value = strdup(value);
            return 1;
        }
        current = current->next;
    }

    node = malloc(sizeof(shash_node_t));
    if (!node)
        return 0;

    node->key = strdup(key);
    if (!node->key)
    {
        free(node);
        return 0;
    }
    node->value = strdup(value);
    if (!node->value)
    {
        free(node->key);
        free(node);
        return 0;
    }

    node->next = ht->array[index];
    ht->array[index] = node;

    insert_sorted_node(ht, node);

    return 1;
}

/**
 * shash_table_get - Retrieves a value associated with a key in the sorted hash table
 * @ht: The sorted hash table
 * @key: The key
 * Return: The value associated with the key, or NULL if key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    unsigned long int index;
    shash_node_t *node;

    if (!ht || !key || !*key)
        return NULL;

    index = key_index((const unsigned char *)key, ht->size);
    node = ht->array[index];
    while (node)
    {
        if (strcmp(node->key, key) == 0)
            return node->value;
        node = node->next;
    }

    return NULL;
}

/**
 * shash_table_print - Prints the sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
    int first = 1;
    shash_node_t *node;

    if (!ht)
        return;

    printf("{");
    node = ht->shead;
    while (node)
    {
        if (!first)
            printf(", ");
        printf("'%s': '%s'", node->key, node->value);
        node = node->snext;
        first = 0;
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - Prints the sorted hash table in reverse order
 * @ht: The sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    int first = 1;
    shash_node_t *node;

    if (!ht)
        return;

    printf("{");
    node = ht->stail;
    while (node)
    {
        if (!first)
            printf(", ");
        printf("'%s': '%s'", node->key, node->value);
        node = node->sprev;
        first = 0;
    }
    printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
    unsigned long int i;
    shash_node_t *node, *temp;

    if (!ht)
        return;

    for (i = 0; i < ht->size; i++)
    {
        node = ht->array[i];
        while (node)
        {
            temp = node;
            node = node->next;
            free(temp->key);
            free(temp->value);
            free(temp);
        }
    }

    free(ht->array);
    free(ht);
}
