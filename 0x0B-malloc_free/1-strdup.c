#include "main.h"
#include <stdlib.h>
/**
 * strl - returns a length of a string
 * @s: pointer to a string to be counted character by character
 * Return: length
 */
int strl(char *s)
{
	int length;

	for (length = 1; *s != '\0'; s++)
	{
		length++;
	}
	return (length);
}

/**
 * _strdup - returns a pointer to allocated space containing a copy of a string
 * @str: a pointer to a stringto be copied
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *ptr;
	int i = 0;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strl(str);

	ptr = malloc(sizeof(char) * len);
	if (ptr == 0)
	{
		return (NULL);
	}
	while (len > i)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
