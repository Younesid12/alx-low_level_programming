#include "lists.h"
/**
 * dlistint_len - returns the number if elements in a linked dlistint_t list
 * @h: the head of the linked list
 * Return: the number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t count;

	count = 0;
	ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
