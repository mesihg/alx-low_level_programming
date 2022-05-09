#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a copy of new dog
 * @name: pointer for name
 * @age: age of the dog struct
 * @owner: pointer for owner
 *
 * Return: returns a new copy of struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ptr;

ptr = malloc(sizeof(dog_t));

if (ptr == NULL)
	return (NULL);
if (owner == NULL || name == NULL)
{
return (NULL);
}
ptr->name = name;
ptr->age = age;
ptr->owner = owner;
return (ptr);
}
