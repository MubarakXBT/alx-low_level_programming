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
	char *cpname, *cpown;
	int lenm = 0, leno = 0, i;

	while (name[lenm])
		lenm++;
	while (owner[leno])
		leno++;

	user = malloc(sizeof(dog_t));
	if (user == NULL)
		return (NULL);

	cpname = malloc(lenm + 1);
	if (cpname == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		cpname[i] = name[i];
	cpname[i] = '\0';

	cpown = malloc(leno + 1);
	if (cpown == NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
		cpown[i] = owner[i];
	cpown[i] = '\0';

	user->name = cpname;
	user->age = age;
	user->owner = cpown;
	return (user);
}
