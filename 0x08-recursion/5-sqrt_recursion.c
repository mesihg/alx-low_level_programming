#include "main.h"

/**
 * _sqrt_recursion - square root of a natural number
 * @n: input number
 *
 * Return: return square root of a natural number
 */

int _sqrt_recursion_helper(int n, int i)
{
if (n == 0 || n == 1)
	return (n);
else if (i * i < n)
	return (_sqrt_recursion_helper(i + 1, n));
else if (i * i == n)
	return (i);
return (-1);
}

int _sqrt_recursion(int n)
{
return (_sqrt_recursion_helper(n, 1));
}
