#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print LL
 * @h: lead pointer
 *
 * Return: LL length
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == 0)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}

	return (count);
}
