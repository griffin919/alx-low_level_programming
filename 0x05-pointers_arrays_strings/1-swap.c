#include <stdio.h>
#include "main.h"

/**
 * swap_int - a function that swaps
 * the values of two integers.
 *
 * @a : func pointer param
 * @b : func pointer param
 *
 */
void swap_int(int *a, int *b)
{
	int _tmp = 0;

	_tmp = *a;
	*a = *b;
	*b = _tmp;
}
