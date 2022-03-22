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
	listint_t *aux1;

	if (head == NULL || *head == NULL)
		return;

	for (; *head;)
	{
		aux1 = *head->next;
		free(*head);
		*head = aux1;
	}
	*head = NULL;
}
