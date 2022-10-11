#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free malloc allocated space to struct
 * @d: pointer to stuct
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
