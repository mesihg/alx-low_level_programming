#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: separator string
 * @n: integer input
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ns;

va_start(ns, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(ns, int));

if (i != (n -1) && separator != NULL)
	printf("%s", separator);
}

printf("\n");
va_end(ns);
}
