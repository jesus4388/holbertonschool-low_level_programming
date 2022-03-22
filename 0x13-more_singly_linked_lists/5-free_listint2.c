#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - a function that frees
 * @head: pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *aux1 = *head;
	listint_t *aux2;

	if (*head)
	{
		for (; aux1;)
		{
			aux2 = aux1;
			aux1 = aux1->next;
			free(aux2);
		}
		*head = NULL;
	}
}
