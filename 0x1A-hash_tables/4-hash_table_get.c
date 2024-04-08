#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to the hash table
 * @key: pointer to the key
 * Return: the value associated with the element, or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index]->value = NULL)
	{
		return (NULL);
	}
	else if (strcmp(ht->array[index]->key, key) == 0)
	{
		return (ht->array[index]->value);
	}
	else if (ht->array[index]->next != NULL)
	{
		temp = ht->array[index]->next;
		while(temp->next)
		{
			if (strcmp(temp->key, key))
			{
				return (temp->value);
			}
			temp = temp->next;
		}
	}
	return (NULL);
}
