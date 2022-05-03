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
int **ptr;
int i, j;
ptr = malloc(height * sizeof(int *));
if (ptr == NULL)
	return (NULL);

for (i = 0; i < height; i++)
{
ptr[i] = malloc(sizeof(int) * width);
if (ptr[i] == NULL)
	for (i = i - 1; i >= 0; i--)
		free(ptr[i]);
free(ptr);
return (NULL);
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
	ptr[i][j] = 0;
}
return (ptr);
}
