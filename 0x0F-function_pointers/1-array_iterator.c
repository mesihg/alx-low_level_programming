#include "function_pointers.h"

/**
 * array_iterator - function that executes a function with a given parameter
 * @array: array of elements
 * @size: size of an elements
 * @action: function poineter
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array && size > 0 && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
