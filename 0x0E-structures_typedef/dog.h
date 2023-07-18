#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct dog - basic information about dog
 *
 * @name: dog name
 * @owner: the dog owner name
 * @age: the dog age
 *
 * Description: struct include basic information about dog & his owner
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */
