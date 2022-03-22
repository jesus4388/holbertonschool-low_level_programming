#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - a function that returns the sum of all the data (n)
 * @head: pointer
 * Return: sum or 0
 */
int sum_listint(listint_t *head)
{
	listint_t *aux = head;
	int n = 0;

	if (head == NULL)
		return (0);

	for (; aux;)
	{
		n = n + aux->n;
		aux = aux->next;
	}
	return (n);
}
