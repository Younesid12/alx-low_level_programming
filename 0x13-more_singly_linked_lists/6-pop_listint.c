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
	int n_data;

	ptr = *head;

	if (!head || !*head)
	{
		return (-1);
	}
	if (ptr->next == NULL)
	{
		n_data = ptr->n;
		free(ptr);
		*head = NULL;
		ptr = NULL;
		return (n_data);
	}
	else
	{
		n_data = ptr->n;
		*head = ptr->next;
		free(ptr);
		return (n_data);
	}
}
