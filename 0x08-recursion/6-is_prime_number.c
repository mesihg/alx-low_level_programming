#include "main.h"

/**
 * is_prime_number - check if a number is prime or not
 * @n: input number
 *
 * Return: return 1 if the input number is prime otherwise return 0
 */

int is_prime_number(int n)
{
int i;

for (i = 2; i < n; i++)
{
if (n % i == 0)
	return (0);
}
return (1);
}
