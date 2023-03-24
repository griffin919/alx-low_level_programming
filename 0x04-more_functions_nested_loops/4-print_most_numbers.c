#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers -  a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int j;

	for (j = 0; j <= 9; j++)
	{
		if (j == 2)
			continue;
		else if (j == 4)
			continue;
		else
			_putchar(j + '0');
	}
	_putchar('\n');
}
