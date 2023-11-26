#include <stdio.h>
/**
 * strncat - concatenates two strings
 * @dest: the destination where the second string will be appended
 * @src: the source string which is the string to be appended
 * @n: number of bytes to be printed
 * Return: pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int b = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (b < n && src[b] != '\0')
	{
		dest[i++] = src[b++];
	}
	dest[i] = '\0';
	return (dest);
}
