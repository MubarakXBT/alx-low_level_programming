#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - Funtion to print output of Struct
 * @d: Struct intialization
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	printf("Name: %s\nAge: %0.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
