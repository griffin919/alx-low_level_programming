#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_node_end
 * @head: lead pointer
 * @str
 *
 * Return: nextnode
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nextnode;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	nextnode = malloc(sizeof(list_t));
	
	if (!nextnode)
		return (NULL);

	nextnode->str = strdup(str);
	nextnode->len = len;
	nextnode->next = NULL;

	if (*head == NULL)
	{
		*head = nextnode;
		return (nextnode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = nextnode;
	
	return (nextnode);

}
