#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - funtion that deletes the head node
 * @head: pointer
 * Return: n or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *aux = *head;
	int n = 0;

	if (head)
	{
		*head = aux->next;
		n = aux->n;
		free(aux);
		return (n);
	}
	else
	{
		return (0);
	}
}
