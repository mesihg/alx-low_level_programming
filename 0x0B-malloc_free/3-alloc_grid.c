#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - a function that returns 2D array of integers
 * @width: width of the dimension
 * @height: height of the dimension
 *
 * Return: returns a pointer of 2D array
 */

int **alloc_grid(int width, int height)
{
if (width <= 0 || height <= 0)
	return (NULL);
int *ptr;
unsigned int i, j;
ptr = malloc((width * height) * sizeof(int));
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
	ptr[i][j] = 0;
}
free(ptr);
return (ptr);
}
