#include "main.h"
/**
 * is_prime_number - returns 1 if the number is a prime number
 * @n: integer
 * Return: 1 if it is a prine number, otherwise, it returns 0
 */
int is_prime_number(int n)
{
	return (findprime(n, 0));
}

/**
 * findprime - checks if a number is a prime
 * @n: integer to be checked
 * @find: integer served as a checker
 * Return: 1 if prime number, otherwise 0
 */
int findprime(int n, int find)
{
	if (find * find == n)
	{
		return (0);
	}
	else if (n < find)
	{
		return (1);
	}
	else
	{
		findprime(n, find + 1);
	}
}

