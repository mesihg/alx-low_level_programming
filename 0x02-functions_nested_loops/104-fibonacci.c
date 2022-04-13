#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
long int i, n1 = 1, n2 = 2, fib = 0;

for (i = 0; i < 98; i++)
{
printf("%ld, ", n1);
fib = n1 + n2;
n1 = n2;
n2 = fib;
if (i == 97)
{
printf("%ld\n", n1);
}
}
return (0);
}
