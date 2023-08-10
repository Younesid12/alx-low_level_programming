#include "main.h"

/**
 * _sqrt_recursion - find natural square root
 * @n: int
 * @guess: square root
 * Return: int
 */
int square(int n, int guess);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * square - find square root
 * @n: int to find square root
 * @guess: square root
 * Return: int
 */

int square(int n, int guess)
{

if (guess * guess == n)
	return (guess);
else if (guess * guess < n)
	return  (square(n, guess + 1));
else
	return (-1);

}

