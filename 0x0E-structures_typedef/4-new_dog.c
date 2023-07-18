#include "dog.h"

/**
 * new_dog - allocate memory for new dog struct
 *
 * @name: pointer to dog name
 *
 * @age: the dog age
 *
 * @owner: pointer to dog owner
 *
 * Return: new pointer to first_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *first_dog;

	first_dog = malloc(sizeof(dog_t));

	if (!first_dog)
	{
		return (NULL);
	}

	first_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (!first_dog->name)
	{
		free(first_dog);
		return (NULL);
	}
	first_dog->name = strcpy(first_dog->name, name);

	first_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (!first_dog->owner)
	{
		free(first_dog->name);
		free(first_dog);
		return (NULL);
	}
	first_dog->owner = strcpy(first_dog->owner, owner);

	first_dog->age = age;

	return (first_dog);
}
