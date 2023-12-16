#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 *_strchr - locates a charracter in a string
 *@s : string
 * @c : character
 * Return: returns a pointer to the first occurence of c or null
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
	if (s[i] == c)
	{
		return (s + i);
	}
	i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return (NULL);
}
