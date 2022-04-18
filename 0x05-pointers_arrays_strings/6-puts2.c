#include "main.h"

/**
 * puts2 - prints characters followed by new line
 * @str: a pointer for char input str
 *
 * Return: nothing is returned
 */
void puts2(char *str)
{
int a;
for (a = 0; str[a] != '\0'; a++)
{
if (a % 2 == 0)
_putchar(str[a]);
}
_putchar('\n');
}
