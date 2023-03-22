#ifndef ISLOWER
#define ISLOWER

#include "main.h"
#include <ctype.h>

/**
 * print_alphabet - prints alphabet in lowercase
 * The character to print
 * Return: void
 */
int _islower(int c)
{

	if (islower(c))
		return (1);
	else
		return(0);

	
}

#endif
