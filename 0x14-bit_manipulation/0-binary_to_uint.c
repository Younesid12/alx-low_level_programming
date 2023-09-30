#include <stddef.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: b is pointing to a string of 0 and 1 chars
 * Return: the converted number or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int i;

	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		number = (number << 1) + (b[i] - '0');
	}
	return (number);
}
