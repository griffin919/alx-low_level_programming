#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * cap_string - a function that capitalizes
 * all words of a string.
 *
 * @str : passed in string
 *
 * Return: integer
 */
char *cap_string(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr == ' ' || *ptr == '.' || *ptr == '\n')
		{
			ptr++;
			*ptr = toupper(*ptr);
		}
		else if (*ptr == '\t')
		{
			*ptr = ' ';
		}
		ptr++;
	}

	return (str);
}
