#include <string.h>
#include "main.h"

/**
 * _strncpy - a function that copies a string.
 *
 * @dest : destination var
 * @src : source var
 * @n : number of chars to copy
 *
 * Return: concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
