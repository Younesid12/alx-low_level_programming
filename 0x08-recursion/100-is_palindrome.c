#include "main.h"
/**
 * _strlen - counts the length of a string
 * @s: pointer to a string to be counted
 * Return: length
 */
int _strlen(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen(s + 1);
	}
}

/**
 * check_palindrome - checks for a palindrome
 * @s: pointer to the string to be checked if it is palidrome
 * @beginning: serves as the beginning of a string
 * @end: serves as the end of the string to compare them
 * Return: 1 if a string is a palindrome and 0 if not
 */

int check_palindrome(char *s, int beginning, int end)
{
	if (beginning >= end)
	{
		return (1);
	}
	if (s[beginning] != s[end])
	{
		return (0);
	}
	return (check_palindrome(s, beginning + 1, end - 1));
}

/**
 * is_palidrome - returns 1 if a string is a palindrome
 * @s: a pointer to the string
 * Return: 1 if a it is a palindome and 0 if not
 */
int is_palindrome(char *s)
{

	int length;

	length = _strlen(s);
	return (check_palindrome(s, 0, length - 1));
}
