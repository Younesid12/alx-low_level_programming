#include "main.h"
#include <stdio.h>

/**
 * *_strcat - appends the source string to the destination string
 * @dest: the first string
 * @src: the second string
 * Return: returns the destination concatenates two strings.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	if (src == NULL)
	{
		return (dest);
	}
	else
	{
	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i = i + 1;
	}

	dest[i] = '\0';

	return (dest);
	}
}
