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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}

	return (&s[i]);
}
