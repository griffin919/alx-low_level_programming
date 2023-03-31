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

/*
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr == ' ' || *ptr == '.' || *ptr == '-' || *ptr == '\n')
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

*/

	int len = strlen(str);
	int i = 0;


	for(i =0; i <= len; i++)
	{	
		if (str[i] != '\0' )
		{	
			if (str[i] == '\t')
			{
				str[i] = ' ';
			}
		}
	
	}

	for(i =0; i <= len; i++)
	{
		if (str[i] != '\0' )
		{
			if (str[i] == ' ' || str[i] == '.' || str[i] == '\n')
                        {
				str[i + 1] = toupper(str[i +1]);
			}												                 }
	}
	return str;
}

