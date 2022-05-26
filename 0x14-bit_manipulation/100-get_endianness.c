#include "main.h"

/**
 * get_endianness - check the endianness
 *
 * Return: 0 if big endian 1 otherwise
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *c = (char *)&num;
	return (*c);
}
