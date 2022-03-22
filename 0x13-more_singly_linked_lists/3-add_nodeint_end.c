#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - a function that adds a new node at the end
 * @head: pointer
 * @n: pointer
 * Return: new
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *aux = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head)
	{
		for (; aux->next;)
		{
			aux = aux->next;
		}
		aux->next = new;
	}
	else
	{
		*head = new;
	}
	return (new);
}
