#include <string.h>
#include "main.h"

/**
 * reverse_array - a function that reverses
 * the content of an array of integers..
 *
 * @a : string 1
 * @n : string 2
 *
 * Return: integer
 */
void reverse_array(int *a, int n)
{
	int start = 0;

	int end = n - 1;

	while (start < end)
	{
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
