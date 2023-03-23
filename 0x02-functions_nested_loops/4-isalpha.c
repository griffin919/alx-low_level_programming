#ifndef ISALPHA
#define ISALPHA

#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks if alphabet is uppercase
 *
 * @c: isalpha arg
 * Return: 1 true 0 means false
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);

}
#endif
