#include <stdio.h>
#include <stdlib.h>

/* more headers goes here */

/**
 * main - prints all numbers in base 16
 *
 * Return: 0 this returns zero
*/
int main(void)
{
	int c;

	for (c = 0; c <= 9; ++c)
	{
		putchar(c + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
