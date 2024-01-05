#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * pop_listint - removes the head node of a linked list
 * @head: pointer to pointer to the head node
 * Return: the heads node's data(n), 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	listint_t *n;

	if (!head || !*head)
	{
		return (0);
	}
	else
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
		n = (*head)->n
		return (n);
	}
}
