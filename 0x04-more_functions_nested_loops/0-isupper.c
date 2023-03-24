#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks if alphabet is uppercase
 *
 * @c: isupper arg
 * Return: 1 true 0 means false
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
