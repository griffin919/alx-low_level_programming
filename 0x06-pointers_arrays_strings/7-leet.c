#include "main.h"
#include "string.h"

/**
 *leet- a function that encodes a string into 1337
 *
 *@str - leet function param
 *
 *Return : str
 */
char *leet(char *str)
{
	int len, i;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] == 'A' || str[i] == 'a')
			str[i] = (4 + '0');
		else if (str[i] == 'E' || str[i] == 'e')
			str[i] = (3 + '0');
		else if (str[i] == 'O' || str[i] == 'o')
			str[i] = (0 + '0');
		else if (str[i] == 'T' || str[i] == 't')
			str[i] = (7 + '0');
		else if (str[i] == 'L' || str[i] == 'l')
			str[i] = 1 + '0';
	}

	return (str);
}
