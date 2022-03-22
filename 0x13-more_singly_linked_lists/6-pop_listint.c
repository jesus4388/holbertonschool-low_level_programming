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
	listint_t *aux;
	int n = 0;

	if (head == NULL)
		return (0);

	if (head)
	{
		aux = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = aux;
	}
	return (n);
}
