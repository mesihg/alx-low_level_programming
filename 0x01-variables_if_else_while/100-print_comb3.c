#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, n1;

for (n = 0; n < 9; n++)
{
for (n1 = n + 1; n1 < 10; n1++)
{

putchar((n % 10) + '0');
putchar((n1 % 10) + '0');


putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
