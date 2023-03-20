#include <stdio.h>
#include <stdlib.h>

/* more headers goes here */

/**
 * main - prints all possible combinations
 * of single-digit numbers.
 *
 * Return: 0 this returns zero
*/
int main(void)
{
	int c;

	for (c = 0; c <= 9; ++c)
	{
		if (c != 0)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(c + '0');
	}
	putchar('\n');

	return (0);
}
