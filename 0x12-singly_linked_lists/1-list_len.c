#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
 * list_len - returns the number of elements in a linked lists_t list
 * @h: pointer to the head node of the linked list
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	if (!h)
	{
		return (0);
	}

	const list_t *ptr = h;

	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
