#include "hash_tables.h"
/**
 * key_index - gives you the index of a key
 * @key: the key
 * @size: the size of the array of the hashtable
 * Return: index at which the key/value pair should be
 * stored in the array of the hashtable
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value = hash_djb2(key);
	int n;

	n = value % size;
	return (n);
}
