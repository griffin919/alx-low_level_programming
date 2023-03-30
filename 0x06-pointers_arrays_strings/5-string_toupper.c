#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * string_toupper - a function that changes
 * all lowercase letters of a string to uppercase.
 *
 * @str : passed in string
 *
 * Return: integer
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		*ptr = toupper(*ptr);
		ptr++;
	}

	return (str);
}
