#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of linked list
 * Return: the size of the string
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	int size = 0;

	if (!h)
	{
		return (0);
	}
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		size++;
	}
	return (size);
}
