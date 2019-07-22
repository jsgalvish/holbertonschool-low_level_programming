#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
* new_dog - initialize a dog
* @name: dog name
* @age: dog age
* @owner: dog owner
* Return: a new dog
**/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}

	n_dog->name = name;
	n_dog->age = age;
	n_dog->owner = owner;
	return (n_dog);
}
