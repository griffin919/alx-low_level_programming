#include <stdio.h>
#include <stdlib.h>

/* more headers goes here */

/**
 * main - prints lowercase alphabet in reverve order
 *
 * Return: 0 this returns zero
*/
int main(void)
{
	int c;

	for (c = 'z'; c >= 'a'; --c)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
