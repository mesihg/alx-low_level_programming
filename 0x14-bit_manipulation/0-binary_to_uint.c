#include "main.h"

/**
 * binary_to_uint - convert binary number to an unsigned int
 * @b: pointer to char
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, dec, len;
	len = strlen(b);

	if (b == NULL)
		return (0);
	for (i = 0, dec = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		dec += (b[i] - '0') * (1 << (len - i - 1));
	}
	return (dec);
}
