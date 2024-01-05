#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees a listint_t list but sets head to NULL
 * @head: pointer to pointer to the first node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;
	while (head != NULL)
	{
		ptr = *head->next;
		free(*head);
		*head = ptr;
	}
}
