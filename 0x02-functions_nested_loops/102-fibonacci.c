#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int num1 = 0, num2 = 1;
int fib =  num1 + num2;

for (i = 2; i <= 50; i++)
{
printf("%d", fib);
num1 = num2;
num2 = fib;
fib = num1 + num2;

if (i < 49)
{
printf(", ");
}
}
putchar('\n');
return (0);
}
