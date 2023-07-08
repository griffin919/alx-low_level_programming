#include "main.h"

/**
 * print_binary - printing binary rep. of a given uint.
 * @n: given uint.
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	int len = sizeof(n) * 8 - 1;

	for (i = len; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
