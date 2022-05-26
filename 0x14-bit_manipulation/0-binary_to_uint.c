#include "main.h"

/**
 * binary_to_uint - convert binary number to an unsigned int
 * @b: pointer to char
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int number = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		number = 2 * number + (b[i] - '0');
	}

	return (number);
}
