#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 *
 * @array: array to be searched
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-i);
}
