#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned int i = 0;

	if (!ht)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (!ht->array[0])
			{
				printf(", ");
			}
			printf("'%s': '%s' ", temp->key, temp->value);
			temp = temp->next;
		}
	}
	printf("}\n");
}
