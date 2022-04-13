#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
unsigned long num1 = 0, num2 = 1, fib;

for (i = 2; i < 50; i++)
{
fib =  num1 + num2;
printf("%lu", fib);
num1 = num2;
num2 = fib;
if (i == 49)
{
printf('\n');
}
else
{
printf(", ");
}
}
return (0);
}
