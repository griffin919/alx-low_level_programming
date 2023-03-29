#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strlen - a function that returns
 * the length of a string.
 *
 * @s : pointer param
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
