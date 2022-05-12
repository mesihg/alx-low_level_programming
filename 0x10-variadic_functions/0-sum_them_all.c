#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters
 * @n: integer arguments
 *
 * Return: returns sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
int i, sum;
va_list ns;

sum = 0;

if (n == 0)
	return (0);
va_start(ns, n);

for (i = n; i >= 0; i = va_arg(ns, int))
	sum += i;
va_end(ns);
return (sum);
}
