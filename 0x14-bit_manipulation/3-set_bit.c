#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to number
 * @index: index of the bit
 *
 * Return: 1 one success -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
	return (-1);
*n = ((1 << *n) | n);

return (1);
}
