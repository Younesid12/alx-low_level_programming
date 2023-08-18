#include "main.h"
/**
 * *str_concate(char *s1, char *s2)
 * s1: holds the first string
 * s2: holds the second string
 * Return: pointer to a new allocated space in memory, 0 if Null
 */
char *str_concat(char *s1, char *s2)
{
	int size = 0;
	if (s1 == 0 || s2 == 0)
	{
		return (0);
	}
	for (
