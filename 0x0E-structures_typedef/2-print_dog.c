#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: variable
 * Return: 0
 */


void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name != NULL)
		{
			printf("name: %s\n", (*d).name);
		}
		else
		{
			printf("name: nil\n");
		}
		if ((*d).owner != NULL)
		{
			printf("owner: %s\n", (*d).owner);
		}
		else
		{
			printf("owner: nil\n");
		}
	}

}
