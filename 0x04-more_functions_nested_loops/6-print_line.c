#include "main.h"

/**
 * print_line - draws a straight line
 * @n: input n denotes number of _ character
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
