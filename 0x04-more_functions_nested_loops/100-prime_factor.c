#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
long int a = 612852475143; 
long int x;
for (x = 2; x < a; x++)
{
if (a % x == 0)
{
a = a/x;
}
}
printf("%ld\n", x);
return (0);
}
