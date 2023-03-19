#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/* more headers goes here */

/**
 * main - Find last_digit of n and output
 * string to console if it last_digit meets a conditio
 *
 * Return: 0 this returns zero
 */
int main(void)
{
	int n, len;
	char int_to_str[10], last_digit;
	char strt[20] = {"Last digit of"};
i
	srand(time(0));
	n = rand() - RAND_MAX / 2;
/*
 * your code goes there
 * casting n to a string/array to find the index of last char
*/
	sprintf(int_to_str, "%d", n);
	len = strlen(int_to_str);
	last_digit = (int) int_to_str[len - 1];

	if (n < 0)
	{
		last_digit = -last_digit;
	}
	if (last_digit > 5)
		printf("%s %d is %c and is greater than 5\n", strt, n, last_digit);
	else if (last_digit != 0 && last_digit < 6)
		printf("%s %d is %c and is less than 6 and not 0\n", strt, n, last_digit);
	else
		printf("%s %d is %c and is 0\n", strt, n, last_digit);

	return (0);
}
