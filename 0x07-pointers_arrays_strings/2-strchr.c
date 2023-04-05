#include "main.h"
#include <string.h>

/**
 * _strchr - a function that locates a character in a string.
 *
 * @s: string to search
 * @c: char to find
 *
 * Return: char
 */
char *_strchr(char *s, char c)
{
	char* p = s;

	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] == c)
		{
			break;
		}
	}

	return (&p[i]);
}
