#include "dog.h"
#include <stdio.h>

/**
* init_dog - the function name
* @d: pointer to the struct
*@name: name argument
* @age: age of the dog
*@owner: character arguement for the dog owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
