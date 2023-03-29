#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - Write a function that prints a string,
 * in reverse, followed by a new line.
 *
 * @s :func pointer param
 *
 */
void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	while ((len + 1) != 0)
	{
		_putchar(*s);
		s--;
		len--;
	}
	_putchar('\n');
}
