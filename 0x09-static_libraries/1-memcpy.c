#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest: memory area
 * @src: source
 * @n: length of src to be copied
 *
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (unsigned int b = 0; b < n; b++)
	{
		dest[b] = src[b];
	}
	return (dest);
}
