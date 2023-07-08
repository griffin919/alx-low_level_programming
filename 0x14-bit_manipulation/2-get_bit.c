#include "main.h"

/**
 * get_bit - get a bit from a specified index
 * @n: uint that bit is being extracted from
 * @index: :)
 * Return: bit at specified index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitaind = 0;

	if (index > 63)
		return (-1);

	bitaind = ((n >> index) & 1);

	return (bitaind);
}
