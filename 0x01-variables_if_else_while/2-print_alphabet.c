#include <stdio.h>
#include <stdlib.h>

/* more headers goes here */

/**
 * main - printing lowercase alphabet
 *
 * Return: 0 this returns zero
*/

int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar("\n");

	return (0);
}
