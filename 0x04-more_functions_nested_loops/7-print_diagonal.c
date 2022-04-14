#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: input n to draw line 
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
int i;
int space;
for (i = 0; i < n; i++)
{
for (space = 0; space < i; space++)
{
_putchar(' ');
}
_putchar('\\');

_putchar('\n');
}
if (n <= 0)
{
_putchar('\n');
}
}
