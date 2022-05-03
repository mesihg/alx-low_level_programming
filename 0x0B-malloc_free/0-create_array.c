#include "main.h"

/**
 * create_array - a function that create an array of chars
 * @size: size of the array
 * @c: a char that fills the array
 *
 * Return: returns array of chars
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;

if (size == 0)
	return (NULL);
else
{
arr = malloc(size * sizeof(char));
if (arr != NULL)
	for (i = 0; i < size; i++)
		arr[i] = c;

}

return (arr);
}
