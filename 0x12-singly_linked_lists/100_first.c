#include "lists.h"
#include <stdio.h>
void _printf(void) __attribute__ ((constructor));

/**
 * _printf - executes before main()
 *
 * Return: void
 */

void _printf(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
