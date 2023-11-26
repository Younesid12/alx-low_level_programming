#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: the destination where the second string will be appended
 * @src: the source which is the second string to be appended
 * Return: return a pointer to the concatenated strnig
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int b = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[b] != '\0')
	{
		dest[i++] = src[b++];
	}
	dest[i] = '\0';
	return (dest);
}
