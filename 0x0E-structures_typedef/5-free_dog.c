#include "dog.h"

/**
 * free_dog - free memory of struct d
 *
 * @d: pointer to struct
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
	}
}
