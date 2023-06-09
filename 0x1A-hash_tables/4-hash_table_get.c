#include "hash_tables.h"

/**
 * hash_table_get - retrieve value from hash table
 * @ht: the hash tab;e to retrive value
 * @key: key from which to retrive value
 * Return: value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;

	hash_node_t *current;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	index = hash_djb2((unsigned char *)key) % ht->size;
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);

}
