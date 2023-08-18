#include "main.h"
/**
 * *_strdup - returns a pointer to  newly allocated space in memory
 * contains a copy of the string given as a parameter
 * @str: pointer to a string
 * Return: pointer to a new string, or Null if str = 0
 */
char *_strdup(char *str)
{
	int i = 0;
	int b = 0;
	char *ptr;

	if (str == 0)
	{
		return(0);
	}
	while (str[i] =! '\0')
	{
		i++;
	}
	ptr = malloc(i * sizeof(str) + 1);
	
	
	if (ptr == 0)
	{
	return (0);
	}
	else
	{ 
		for (b < i; b++;)
			ptr[b] = str[b];
	}
	return (ptr);
}	



