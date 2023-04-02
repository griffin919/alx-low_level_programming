#include "main.h"


/**
 *  rot13 - encodes passed string with RTO13
 *
 *  @str: passed string
 *
 *  Return: encoded string
 */
char *rot13(char *str)
{
	char *ptr = str;

	char alphax2[52] = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
	int alpha_index, i;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		for (alpha_index = 0; alpha_index < 26; alpha_index++)
		{
			char letter = 'a' + alpha_index;

			if (ptr[i] == letter)
			{
				int offset_index = alpha_index + 13;

				ptr[i] = alphax2[offset_index];
				break;
			}
		}
	}
	return (str);
}
