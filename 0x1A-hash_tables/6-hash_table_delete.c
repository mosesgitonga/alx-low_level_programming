#include "hash_tables.h"

/**
 * hash_table_delete - deleting hash table
 * @ht: the hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *current, *tmp;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		current = ht->array[index];

		while (current != NULL)
		{
			tmp = current;
			current = current->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);

		}
	}
	free(ht->array);
	free(ht);

}
