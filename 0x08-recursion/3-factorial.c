#include "main.h"
#include <string.h>

/**
 * factorial - a function that returns the
 * factorial of a given number.
 *
 * @n: number to find factorial of
 *
 * Return: 0 if n < -1;
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
