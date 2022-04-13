#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i, n1 = 0, n2 = 1, fib;

for (i = 0; i < 98; i++)
{
if (i == 97)
{
printf("%d",n1); 
}
else
{
printf("%d, ",n1);
fib = n1 + n2;
n1 = n2;
n2 = fib;
}
}
printf("\n");
return (0);
}
