#include "main.h"
#include <stdlib.h>
/**
 * strl - counts the length of a string
 * @s: pointer to a string to be counted
 * Return: length
 */
int strl(char *s)
{
	int length;

	for (length = 0; *s != '\0'; s++)
	{
		length++;
	}
	return (length);
}

/**
 * str_concat - concatenates two strings
 * @s1: pointer to a string 1
 * @s2: pointer to the second string that will be added to the string 1
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	char *ptr;
	int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strl(s1);
	len2 = strl(s2);

	ptr = malloc(sizeof(char) * (len1 + len2) + 1);

	if (ptr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < len1 + len2; i++)
	{
		if (i < len1)
		{
			ptr[i] = s1[i];
		}
		else
		{
			ptr[i] = s2[i - len1];
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
