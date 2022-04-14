#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: input to print triangle
 */
void print_triangle(int size)
{
int i;
	
if (size <= 0)
_putchar('\n');
while (size > 0)
{
for (i = 0; i < size; i++)
_putchar((i < size - 1) ? ' ' : '#');
_putchar('\n');
size--;
}
}
