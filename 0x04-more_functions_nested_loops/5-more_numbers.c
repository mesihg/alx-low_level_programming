#include "main.h"
#include <stdio.h>
/**
 * more_numers - prints 10 times the numbers, from 0 to 14
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
int i = 0;
int j;
for (j = 0; j < 10; j++)
{
i = 0;
while (i <= 14)
{
if (i >= 10)
{
_putchar(i / 10 + '0');
}
_putchar(i % 10 + '0');
i++;
}
_putchar('\n');
}
}
