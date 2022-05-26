#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer to number
 * @index: index of the number to be cleared
 *
 * Return: 1 on success -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
	return (-1);
*n = (~(1 << index) & *n);
return (1);
}
