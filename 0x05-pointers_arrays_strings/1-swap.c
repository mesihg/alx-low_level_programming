#include "main.h"

/**
 * swap_int - swaps the given two integers
 * @a: a pointer for member a
 * @b: a pointer for member b
 * Return: nothing is returned
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;

}
