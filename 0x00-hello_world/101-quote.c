#include <stdio.h>
/**
 *  main - Output without using puts or printf
 *  Return: 0 means success
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stdout, "%s", str);

	return (1);
}

