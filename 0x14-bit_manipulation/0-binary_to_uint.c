#include "main.h"

/**
 * power - custom function to calc exponents
 * @base: :)
 * @exponent: :)
 * Return: result
 */
unsigned int power(int base, int exponent)
{
	unsigned int result = 1;
	int i;

	for (i = 0; i < exponent; i++)
	{
		result *= base;
	}

	return (result);
}

/**
 * binary_to_uint - convert binary to positive int
 * @b: binary char array/string
 * Return: converted unsigned int
 */
unsigned int binary_to_uint (const char *b)
{
	int len = 0, j, k;
	unsigned int convertedTot = 0;

	while (b[len] != '\0')
	{
		if ((b[len] != '1' && b[len] != '0') || !b)
			return (0);
		len++;
	}

	for (j = 0, k = len; j < len || k >= 0; j++, k--)
	{
		if (b[j] == '1')
			convertedTot += 1 * power(2, k - 1);
	}

	return (convertedTot);
}
