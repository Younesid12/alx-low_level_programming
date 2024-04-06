#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: the saize of the array
 * Return: a pointer to the newly created hash table, otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash = malloc(sizeof(hash_table_t));

	if (!new_hash)
	{
		return (NULL);
	}
	new_hash->size = size;
	new_hash->array = (hash_node_t **)calloc(size, sizeof(hash_node_t));
	if (!new_hash->array)
	{
		return (NULL);
	}
	return (new_hash);
}

