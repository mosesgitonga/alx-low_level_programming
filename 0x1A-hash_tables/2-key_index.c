#include "hash_tables.h"

/**
 * key_index - a function that index of  a key
 * @key: key to search for
 * @size: size of hash table
 * Return: integer
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int hash_value;
	unsigned int index;

	hash_value = hash_djb2(key);

	index = hash_value % size;

	return (index);
}
