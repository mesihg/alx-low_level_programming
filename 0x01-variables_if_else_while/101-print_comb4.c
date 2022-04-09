#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, n1, n2;

for (n = 0; n < 8; n++)
{
for (n1 = n + 1; n1 < 9; n1++)
{
for (n2 = n1 + 1; n2 < 10; n2++)
{

putchar((n % 10) + '0');
putchar((n1 % 10) + '0');
putchar((n2 % 10) + '0');

if (n == 7 && n1 == 8 && n2 == 9)
	continue;

putchar(',');
putchar(' ');

}
}
}

putchar('\n');

return (0);
}
