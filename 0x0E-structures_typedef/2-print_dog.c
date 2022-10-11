#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print dog struct variables
 * @d: pointer to dog struct
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		if (d->name == NULL)
			printf("Name: (ni)l\n");
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
	}
}
