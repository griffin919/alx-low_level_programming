#include <stdio.h>
#include <stdlib.h>

/* more headers goes here */

/**
 * main - printing lowercase alphabet except e,q
 *
 * Return: 0 this returns zero
*/

int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		
		if (c == 'e' || c == 'q')
		{
			continue;
		}
		else
		{
			putchar(c);
		}
	}
	putchar('\n');

	return (0);
}
