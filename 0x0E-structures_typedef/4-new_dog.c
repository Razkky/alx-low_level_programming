#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * store_copy - store copy of argument
 * @original: string to b copied
 * Return: pointer to copied string
 */
char *store_copy(char *original)
{
	int i = 0, length = 0;
	char *copy;

	if (original == NULL)
		return (NULL);
	while (*(original + i) != '\0')
	{
		length++;
		i++;
	}
	copy = malloc(length);
	if (copy == NULL)
		return (NULL);
	copy = original;
	return (copy);
}
/**
 *new_dog - initiazlize a new struct dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Return: pointer to new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	char *newDog_name, *newDog_owner;

	newDog_name = store_copy(name);
	if (newDog_name == NULL)
		return (NULL);
	newDog_owner = store_copy(owner);
	if (newDog_owner == NULL)
		return (NULL);
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	newDog->name = newDog_name;
	newDog->owner = newDog_owner;
	newDog->age = age;
	return (newDog);
}
