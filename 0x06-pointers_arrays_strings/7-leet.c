#include "main.h"
#include "string.h"

/**
 * *leet - function that encodes a string
 *
 * @str: leet function param
 *
 * Return: leet
 */
char *leet(char *str)
{
	int i, j;

	char *p = str;

	char tobe_swapped[10] = "aAeEoOtTlL";
	char swapped_with[10] = "4433007711";

	for (i = 0; p[i]; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (tobe_swapped[j] == p[i])
			{
				p[i] = swapped_with[j];
				break;
			}
		}
	}

	return (str);
}
