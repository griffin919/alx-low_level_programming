#include <stdio.h>
#include <stdlib.h>

/* more headers goes here */

/**
 * main - prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 *
 * Return: 0 this returns zero
*/
int main(void)
{
	int c;

	for (c = 0; c <= 9; ++c)
		printf("%d", c);

	putchar('\n');

	return (0);
}
