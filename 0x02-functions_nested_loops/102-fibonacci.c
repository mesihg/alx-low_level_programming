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
int fib =  0;

for (i = 2; i <= 50; i++)
{
fib = num1 + num2;
num1 = num2;
num2 = fib;

printf("%d", fib);
if (i < 49)
{
printf(", ");

}

}
printf('\n');
return (0);
}
