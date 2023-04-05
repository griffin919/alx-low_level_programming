#include "main.h"
#include <string.h>

/**
 * _memcpy - a function that copies memory area
 *
 * @dest: destination memory
 * @src: source memory
 * @n: size of memory to be copied
 *
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
