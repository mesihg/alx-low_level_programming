#include "main.h"

/**
 * binary_to_uint - convert binary number to an unsigned int
 * @b: pointer to char
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec, len, number;
	if (b == NULL)
	{
		return (0);
	}
	number = 0;
	dec = 1;
	len = strlen(b) - 1;

	while (len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] == '1')
		{
			number += dec;
		}
		dec *= 2;
		len--;
	}
	return (number);
}
