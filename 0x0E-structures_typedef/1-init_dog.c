#include "dog.h"

/**
 * init_dog - initialize the variable of type struct dog
 * @d: pointer to dog struct
 * @name: pointer for name
 * @age: age of the dog struct
 * @owner: pointer for owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
(*d).age = age;
d->owner = owner;
}
}
