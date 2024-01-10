#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - returns the sum of all data (n) of a listint_t linked list
 * @head: the head of the linked list
 * Return: sum of the data (n), 0if the list is empty
 */
int sum_listint_t(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	ptr = head;
	if (!head)
	{
		return (0);
	}
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
