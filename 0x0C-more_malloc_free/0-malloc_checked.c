#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates a memory
 * @b: integer input
 *
 * Return: return a pointer to the allocated
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);

if (ptr == NULL)
	exit(98);

return (ptr);
}
