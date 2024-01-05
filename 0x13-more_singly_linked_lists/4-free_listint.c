#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
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
