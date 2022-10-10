#include "dog.h"
#include <stdlib.h>
/**
 * init_dog  - Function to initialize
 * @d: struture to inut.
 * @name: name of dog
 * @age: age of dog
 * @owner: dogs owner
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
