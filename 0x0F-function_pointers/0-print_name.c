#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print string name
 *
 * @name: Given string
 * @f: pointer function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
