#include <string.h>
#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest : destination var
 * @src : source var
 * @n : number of chars to concat
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
