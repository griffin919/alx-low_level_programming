#include "main.h"

/**
 * binary_to_uint - convert binary to positive int
 * @b: binary char array/string
 * Return: converted unsigned int
 */
unsigned int binary_to_uint (const char *b)
{
	unsigned int createdByte = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		createdByte = createdByte << 1;

		if (b[i] == '1')
			createdByte = createdByte | 1;
	}

	return (createdByte);
}
