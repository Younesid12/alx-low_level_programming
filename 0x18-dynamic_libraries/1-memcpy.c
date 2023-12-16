#include "main.h"
#include <stdio.h>

/**
 *_memcpy - copies memory area
 * @dest : first memory area
 * @src : second memory area
 * @n : number of bytes
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
