#include <stdio.h>
#include "main.h"
/**
 * _strncpy - copies a string
 *@dest: the destination where the string will be copied
 *@src: the string to be copied
 *@n: number of bytes to be copies
 *Return: pointer to the string copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i++];
	}
	return (dest);
}
