#include "main.h"

/**
 * _sqrt_recursion - square root of a natural number
 * @n: input number
 *
 * Return: return square root of a natural number
 */

int _sqrt_recursion(int n)
{
return (_sqrt_recursion_helper(n, 1));
}

/**
 * _sqrt_recursion_helper - computes the real work of _sqrt_recursion
 * @n: input number one
 * @i: intput number two
 *
 * Return: returns natural number square root
 */

int _sqrt_recursion_helper(int n, int i)
{
if (n <= 0)
	return (-1);
else if (i * i > n)
	return (-1);
else if (i * i == n)
	return (i);
return (_sqrt_recursion_helper(n, i + 1));
}
