#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_node - a function that adds a new node at the beginning
 * @head: pointer to list_t
 * @str: pointer
 * Return: new
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	new = malloc(sizeof(str));

	if (new)
	{
		new->str = strdup(str);
		new->len = strlen(str);
		new->next = *head;
	}
	if (*head && new)
	{
		*head = new;
	}
	else
	{
		*head = new;
	}
	return (new);
}
