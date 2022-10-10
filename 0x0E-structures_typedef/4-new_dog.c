#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - new dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	int i = 0, j = 0, k;
	dog_t *doged;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	doged = malloc(sizeof(dog_t));
	if (doged == NULL)
	{
		free(doged);
		return (NULL);
	}
	doged->name = malloc(i * sizeof(doged->name));
	if (doged->name == NULL)
	{
		free(doged->name);
		free(doged);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		doged->name[k] = name[k];
	doged->age = age;
	doged->owner = malloc(j * sizeof(doged->owner));
	if (doged->owner == NULL)
	{
		free(doged->owner);
		free(doged->name);
		free(doged);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		doged->owner[k] = owner[k];
	return (doged);
}
