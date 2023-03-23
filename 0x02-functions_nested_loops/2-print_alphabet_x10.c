#include "main.h"

void print_alphabet(void);

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
}

/**
 * print_alphabet - prints lowercase alphabet
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; ++i)
	{
		_putchar(i);
	}

	_putchar('\n');

}
