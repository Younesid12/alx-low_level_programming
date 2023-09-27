#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * size_t listint_len - returns the number of elements in a linked listinit_t
 * @h: pointer to the head of listint_t
 * Return: number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	int size = 0;
	const listint_t *ptr;

	if (!h)
	{
		return (0);
	}
	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		size++;
	}
	return (size);
}
