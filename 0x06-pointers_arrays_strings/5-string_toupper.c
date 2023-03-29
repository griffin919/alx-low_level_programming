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
	char *result = strdup(str);
	int len = strlen(str);

	int i;

	for (i = 0; i < len; i++)
	{
		result[i] = toupper(str[i]);
	}

	return (result);
}
