#include "main.h"
#include <string.h>

/**
 * _memset - a function that fills memory with a constant byte.
 *
 * @b: destination memory
 * @s: source memory
 * @n: size of memory to be copied
 *
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
