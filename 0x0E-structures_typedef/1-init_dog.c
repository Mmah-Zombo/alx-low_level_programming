#include "dog.h"
/**
 * init_dog - function name
 * @d: dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: god's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
