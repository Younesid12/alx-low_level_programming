#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the head of the linked list
 * @idx: the indwx of the list where the new node should be added
 * @n: the data to be initialized to the the added node
 * Return: the address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *temp;
	listint_t *new_node;
	unsigned int i;

	i = 0;
	if (!head || !*head)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	ptr = (*head);
	new_node->n = n;
	new_node->next = NULL;
	while (ptr != NULL)
	{
		if (idx == 0)
		{
			return (new_node);
		}
		else if (i == idx)
		{
			temp = ptr;
			break;
		}
		ptr = ptr->next;
		i++;
	}
	ptr = (*head);
	i = 0;
	while (ptr != NULL)
	{
		if (i == idx - 1)
		{
			ptr->next = new_node;
			new_node->next = temp;
			break;
		}
		ptr = ptr->next;
		i++;
	}
	return (new_node);
}
