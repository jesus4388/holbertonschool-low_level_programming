#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - a function that returns the number of elements in a linked
 * @h: head
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
	int i = 1;

	for (; h->next != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
