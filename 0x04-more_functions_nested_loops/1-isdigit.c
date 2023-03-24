#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks if alphabet is a digit
 *
 * @c: isdigit arg
 * Return: 1 true 0 means false
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);

}
