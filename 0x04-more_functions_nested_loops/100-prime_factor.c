#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 2;
long n = 612852475143;
while (i < n)
{
while (n % i == 0)
{
if (n == i)
{
break;
}
n /= i;
}
i++;
}
printf("%lu\n", n);
return (0);
}
