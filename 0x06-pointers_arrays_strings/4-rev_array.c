#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: a ponter for the contents of array of type int
 * @n: number of elements of the array
 *
 * Return: nothing is returned
 */

void reverse_array(int *a, int n)
{
int i, j;

for (i = 0; i < n/2; i++)
{
j = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = j;
}
}
