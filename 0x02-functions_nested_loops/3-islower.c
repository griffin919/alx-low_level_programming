#ifndef ISLOWER
#define ISLOWER

#include "main.h"
#include <ctype.h>

/**
 * _islower - checks if alphabet is lowercase
 *
 * @c: islower arg
 * Return: 1 true 0 means false
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);

}
#endif
