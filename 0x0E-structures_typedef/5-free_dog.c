#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees struct memory
 * @d: pointer for struct dog
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
