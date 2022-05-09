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
unsigned int i, len_name, len_owner;

len_name = strlen(name);
len_owner = strlen(owner);

ptr = malloc(sizeof(dog_t));
if (ptr == NULL)
	return (NULL);

ptr->name = malloc(sizeof(char) * len_name + 1);
if (ptr->name == NULL)
{
free(ptr);
return (NULL);
}
for (i = 0; i < len_name; i++)
	ptr->name[i] = name[i];
	
ptr->owner = malloc(sizeof(char) * len_owner + 1);

if (ptr->owner == NULL)
{
free(ptr);
free(ptr->name);
return (NULL);
}

for (i = 0; i < len_owner; i++)
	ptr->owner[i] = owner[i];
ptr->age = age;
return (ptr);
}
