#include "dog.h"
/**
 * init_dog - initialize a variable of type struct
 * @d: variable
 * @name: name
 * @age: age
 * @owner: owner
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).owner = owner;
		(*d).age = age;
	}
}
