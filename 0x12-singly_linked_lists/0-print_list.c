#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - print all the elements of a list t
 * @h: pointers
 * Return: 0 or nil
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	for (; h;)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
	h = h->next;
	i = i + 1;
	}
	return (i);

}
