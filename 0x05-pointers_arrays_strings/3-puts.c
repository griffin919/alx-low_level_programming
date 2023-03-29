#include <stdio.h>
#include "main.h"

/**
 * _puts - Write a function that prints a string,
 * followed by a new line, to stdout.
 *
 * @str : pointer param
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
