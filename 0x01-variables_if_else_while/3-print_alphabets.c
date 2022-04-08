#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
char lowerC;
char upperC;

for (lowerC = 'a'; lowerC <= 'z'; lowerC++)
{
putchar(lowerC);
}
for (upperC = 'A'; upperC <= 'Z'; upperC++)
{
putchar(upperC);
}
putchar('\n');

return (0);
}
