#ifndef DOG_H
#define DOG_H

/**
 * struct dog - data structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: dog with name, age, and owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

#endif
