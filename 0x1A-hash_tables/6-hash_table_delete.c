#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned int i;
	hash_node_t = temp;

	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while(ptr)
		{
			free(ptr->key);
			free(ptr->value);
			temp = ptr;
			ptr = ptr->next;
			free(temp);
		}
	}
	free(ht);
}

