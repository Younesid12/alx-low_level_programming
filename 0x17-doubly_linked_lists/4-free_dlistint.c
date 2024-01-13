#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head node of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		head = head->next;
		free(ptr);
		ptr = head;
	}
	head = NULL;
}
