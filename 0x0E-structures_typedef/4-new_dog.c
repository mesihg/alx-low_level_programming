#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new copy of dog struct.
 * @name: pointer for name of the dog.
 * @age: age of the dog struct.
 * @owner: pointer for owner of the dog.
 *
 * Return: returns copy of dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int i, len_name, len_owner;

	ptr = malloc(sizeof(*ptr));
	if (ptr == NULL || !(name) || !(owner))
	{
		free(ptr);
		return (NULL);
	}

	for (len_name = 0; name[len_name]; len_name++)
		;

	for (len_owner = 0; owner[len_owner]; len_owner++)
		;

	ptr->name = malloc(len_name + 1);
	ptr->owner = malloc(len_owner + 1);

	if (!(ptr->name) || !(ptr->owner))
	{
		free(ptr->owner);
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < len_name; i++)
		ptr->name[i] = name[i];
	ptr->name[i] = '\0';

	ptr->age = age;

	for (i = 0; i < len_owner; i++)
		ptr->owner[i] = owner[i];
	ptr->owner[i] = '\0';

	return (ptr);
}
