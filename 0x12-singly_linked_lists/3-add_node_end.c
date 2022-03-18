#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end -  a function that adds a new node at the end
 * @head: pointer
 * @str: pointer
 * return: new
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *headaux = *head;
	list_t *new;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (str && *head)
	{
		for (; headaux->next;)
		{
			headaux = headaux->next;
		}
		new->next = NULL;
		headaux->next = new;
	}
	else
	{
		*head = new;
	}
	return (new);
}
