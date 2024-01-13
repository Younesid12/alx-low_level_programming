#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head node of the linked list
 * @index: the index of the node starting from 0
 * Return: the nth node of a dlistint_t linked list, NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int count;

	ptr = head;
	count = 0;
	
	while(ptr != NULL)
	{
		if (count == index)
		{
			return (ptr);
		}
		ptr = ptr->next;
		count++;
	}
	return (NULL);
}
