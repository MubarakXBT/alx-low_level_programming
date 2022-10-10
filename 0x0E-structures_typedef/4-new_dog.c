#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - New Function for initialisation
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: "User" or "NULL"
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *user;

	user = malloc(sizeof(dog_t));

	if (user == NULL)
		return (NULL);
	user->name = name;
	user->age = age;
	user->owner = owner;
	return (user);
}
