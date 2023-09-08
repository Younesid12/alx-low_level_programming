#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory using malloc
 * @b: size of the memory to be allocated
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	if (b == 0)
	{
		return (NULL);
	}
	ptr = malloc(b);
	if (ptr == 0)
	{
		exit(98);
	}
	return (ptr);
}
