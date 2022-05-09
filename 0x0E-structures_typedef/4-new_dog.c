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

len_name = 0;
len_owner = 0;
while (name != '\0')
	len_name++;
while (owner != '\0')
	len_owner++;
ptr = malloc(sizeof(dog_t));
ptr->name = malloc(len_name * sizeof(char));
ptr->owner = malloc(len_owner * sizeof(char));
if (ptr == NULL)
	return (NULL);
if (ptr->name == NULL)
{
free(ptr);
return (NULL);
}
for (i = 0; i < len_name; i++)
	ptr->name[i] = name[i];

if (ptr->owner == NULL)
{
free(ptr);
free(ptr->name);
return (NULL);
}

for (i = 0; i < len_owner; i++)
	ptr->owner[i] = owner[i];
ptr->name = name;
ptr->age = age;
ptr->owner = owner;
return (ptr);
}
