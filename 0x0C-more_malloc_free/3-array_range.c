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
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = min++;

	return (ptr);
}
