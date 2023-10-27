#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b:pointer to a binary number
 * Return:the converted number, otherwise 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int length = 0;
	unsigned int num = 0;
	unsigned int n = 1;
	int integer = 0;
	char arr[2];

	if (b == NULL)
	{
		return (0);
	}
	else
	{
		length = strlen(b);
		length = length - 1;
		while (i <= length)
		{
			if (b[length] == '1' || b[length] == '0')
			{
				arr[0] = b[length];
				integer = atoi(arr);
				num = num + (integer * n);
				n = n * 2;
			}
			else
			{
				return (0);
			}
			length--;
		}
	}
	return (num);
}
