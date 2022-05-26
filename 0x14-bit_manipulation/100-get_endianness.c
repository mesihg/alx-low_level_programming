#include "main.h"

/**
 * get_endianness - check the endianness
 *
 * Return: 0 if big endian 1 otherwise
 */

int get_endianness(void)
{
	int num = 1;
	return (*(char *)&num == 1);
}
