#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: pointer
 * @n: int
 * Return: new
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(n));
	if (new)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	return (new);
}
