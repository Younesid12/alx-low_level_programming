#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - a function that frees a listint list
 * @head: pointer to the first node of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;
	while (head != NULL)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
}
