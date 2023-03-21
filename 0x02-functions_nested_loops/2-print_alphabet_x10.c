#include "main.h"

/**
 * print_alphabet_x10 -  a function that prints 10 times 
 * the alphabet, in lowercase, followed by a new line.
 * 
 * Return: void
 */
void print_alphabet_x10(void)
{	
	int a;
	for (a = 0; a <= 9; ++a)
	{
		print_alphabet();
	}
		_putchar('\n');

}
