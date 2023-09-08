#include "main.h"
#include <stdlib.h>
/**
 * _strlen - calculates the length of a string
 * @s: pointer to a string to be calculated
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; s++)
	{
		length++;
	}
	return (length);
}

/**
 * *string_nconcat - concatenates two strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * @n: The maximum number of characters from s2 to concatenate.
 * Return: a pointer to the newly allocated concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	char *str;
	unsigned int b = 0;
	unsigned int size1;
	unsigned int size2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	str = malloc(sizeof(char) * (size1 + n) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	while (b < size1 + n)
	{
		if (b < size1)
		{
			str[b] = s1[b];
		}
		else
		{
			str[b] = s2[b - size1];
		}
		b++;
	}
	str[b] = '\0';
	return (str);
}
