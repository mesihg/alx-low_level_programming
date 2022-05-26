#include "main.h"

/**
 * binary_to_uint - convert binary number to an unsigned int
 * @b: pointer to char
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, dec, len, number;
	number = 0;
	dec = 1;
	len = strlen(b);

	if (b == NULL)
		return (0);
	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			number += dec;
		dec *= 2;
	}
	return (number);
}
