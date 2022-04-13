#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i, n1 = 1, n2 = 2, fib = 0;

for (i = 1; i < 98; i++)
{
if (i == 97)
{
printf("%d\n", n1);
}
else
{
printf("%d, ", n1);
fib = n1 + n2;
n1 = n2;
n2 = fib;
}
}
printf("\n");
return (0);
}
