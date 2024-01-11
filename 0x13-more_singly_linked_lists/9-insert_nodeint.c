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
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	ptr = (*head);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = (*head);
		(*head) = new_node;
		return (new_node);
	}
	while (i <= idx)
	{
		if (idx == i)
		{
			temp = ptr;
			break;
		}
		ptr = ptr->next;
		i++;
	}
	i = 0;
	while (i < idx)
	{
		if (i == idx - 1)
		{
			ptr->next = new_node;
			new_node->next = temp;
		}
		i++;
	}
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	return (new_node);
}
