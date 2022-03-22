#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - funtion that prints all the elements
 * @h: pointer
 * Return: i
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	for (; h;)
	{
		printf("%d\n", h->n);
		h = h->next;
		i = i + 1;
	}
	return (i);
}
