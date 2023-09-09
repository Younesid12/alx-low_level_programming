#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb:number of elements to allocate memory for in the array
 * @size: the size of each element in the array
 * Return: pointer to the first allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);

	if (ptr == 0)
	{
		return (NULL);
	}
	for (i = 0; nmemb > i; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
