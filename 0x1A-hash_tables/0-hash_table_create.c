#include "hash_tables.h"

/**
 * hash_table_create - creating a hash table
 * @size: size of hash table
 * Return: hash_table_t
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;

	hash_table_t *new_hash = malloc(sizeof(hash_table_t));

	if (new_hash == NULL)
	{
		return (NULL);
	}
	new_hash->size = size;

	new_hash->array = malloc(sizeof(hash_node_t) * size);
	if (new_hash->array == NULL)
	{
		free(new_hash);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		new_hash->array[i] = NULL;
	}

	return (new_hash);
}
