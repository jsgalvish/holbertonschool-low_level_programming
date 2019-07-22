#include <stdio.h>
#include "dog.h"
/**
* print_dog - print atributes dog
* @d: dog structure
**/
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!d->name)
			d->name = "(nil)";
		if (!d->age)
			d->age = 0;
		if (!d->owner)
			d->owner = "(nil)";

		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
