#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: the head of the linked list
 * @index: the index of the node to return
 * Return: the specified node, NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;
	if (head == NULL)
	{
		return (NULL);
	}
	while (i <= index)
	{
		if (temp->next == NULL && i != index)
		{
			return (NULL);
		}
		else if (i == index)
		{
			return (temp);
		}
		i++;
		temp = temp->next;
	}
	return (NULL);
}
