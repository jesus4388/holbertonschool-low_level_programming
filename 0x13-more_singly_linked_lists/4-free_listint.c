#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: pointer.
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *aux1 = head;
	listint_t *aux2;

	if (head)
	{
		for (; aux1;)
		{
			aux2 = aux1;
			aux1 = aux1->next;
			free(aux2);
		}
	}
}
