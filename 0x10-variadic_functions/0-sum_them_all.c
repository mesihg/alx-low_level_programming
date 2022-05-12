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
unsigned int i, sum = 0;
va_list ns;

sum = 0;

if (n == 0)
	return (0);
va_start(ns, n);

for (i = 0; i < n; i++)
	sum += va_arg(ns, int);
va_end(ns);
return (sum);
}
