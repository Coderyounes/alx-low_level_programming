#include "dog.h"
#include "math.h"

/**
 * print_dog - print the dog struct memebers using printf
 *
 * @d: pointer to struct
 *
 * Return: nothing it's void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("(nil)");
		return;
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	} else
		printf("Name: %s\n", d->name);

	if (isnan(d->age))
	{
		printf("Age: (nil)\n");
	} else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	} else
		printf("Owner: %s\n", d->owner);
}
