#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to add or appdate the key/value to
 * @key: pointer to the key, cannot be an empty string
 * @value: value associated with the key. value must be duplucated
 * can be an empty str
 * Return: 1 if successfull, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (!key || key == "" || ht == NULL)
	{
		return (0);
	}
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		return (0);
	}
	new_node->key = malloc(sizeof(char) * strlen(key) + 1);
	new_node->value = malloc(sizeof(char) * strlen(key) + 1);
	if (!ht->key || !ht->value)
	{
		return (0);
	}
	strcpy(new_node->value);
	strcpy(new_node->key, key);
	new_node->next = NULL;
	index = key_index(key);
	if (!ht->array[index])
	{
		ht->array[index] = new_node;
		return (1);
	}
	array[index]->next = new_node;
}