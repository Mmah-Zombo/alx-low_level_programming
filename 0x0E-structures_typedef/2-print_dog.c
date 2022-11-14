#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function name
 * @d: pointer
 */
void print_dog(struct dog *d)
{
	struct dog;

	if (d == 0)
	{
		return;
	}
	if (d->name == 0)
	{
		d->name = "(nil)";
	}
	if (d->owner == 0)
	{
		d->owner = "(nil)";
	}

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
