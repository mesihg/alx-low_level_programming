#include <stdlib.h>
#include <string.h>
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
int i, len_name, len_owner;

len_name = strlen(name);
len_owner = strlen(owner);

ptr = malloc(sizeof(dog_t));
ptr->name = malloc(len_name + 1);
ptr->owner = malloc(len_owner + 1);

if (ptr == NULL)
	return (NULL);
if (owner == NULL || name == NULL)
{
free(ptr);
free(ptr->name);
free(ptr->owner);
return (NULL);
}
ptr->name = name;
ptr->age = age;
ptr->owner = owner;
return (ptr);
}
