#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stddef.h>

/**
 * struct dog - basic information about dog
 *
 * @name: dog name
 * @owner: the dog owner name
 * @age: the dog age
 *
 * Description: struct include basic information about dog & his owner
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */