#include "dog.h"

/**
 ** init_dog - structure for dogs
 ** @name: first member
 ** @age: second member
 ** @owner: third member
 ** @d: compares
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
