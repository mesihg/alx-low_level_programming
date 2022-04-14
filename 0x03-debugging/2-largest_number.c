#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first input integer
 * @b: second input integer
 * @c: third input integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
	largest = a;
	}
	else if (a > b && c > a)
	{
	largest = c;
	}
	else if (b > c)
	{
	largest = b;
	}
	else
	{
	largest = c;
	}
	return (largest);
}
