#include "dog.h"
#include <stdlib.h>
/**
 * init-dog  - Function to initialize
 * @d: struture to inut.
 * @name: name of dog
 * @age: age of dog
 * @owner: dogs owner
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
