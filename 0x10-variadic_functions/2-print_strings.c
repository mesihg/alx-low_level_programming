#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: separator string
 * @n: integer input
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *st;
va_list strs;

va_start(strs, n);

for (i = 0; i < n; i++)
{
st = va_arg(strs, char *);

if (st != NULL)
{
	printf("%s", st);
}
else
{
	printf("(nil)");
}
if (i != (n - 1) && separator != NULL)
	printf("%s", separator);
}

printf("\n");
va_end(strs);
}
