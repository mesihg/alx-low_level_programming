#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: return pointer of arrays
 */
int *array_range(int min, int max)
{
int *ptr;
unsigned int i;

if (min > max)
	return (NULL);
ptr = malloc((max - min + 1) * sizeof(int));

if (ptr == NULL)
	return (NULL);

for (i = 0; i < (max - min + 1); i++)
	ptr[i] = min++;

free(ptr);
return (ptr);
}
