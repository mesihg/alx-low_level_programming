#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
long num1 = 1, num2 = 2, fib;

for (i = 0; i < 50; i++)
{

if (i == 49)
{
printf("%lu", num1);
}
else
{
printf("%lu, ", num1);
fib = num1 + num2;
num1 = num2;
num2 = fib;
}
}
printf("\n");
return (0);
}
