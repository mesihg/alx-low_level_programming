#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: a pointer for input string 
 *
 * Return: nothing is returned
 */

void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar("%c", *s);
_puts_recursion(s + 1);
}
_putchar("\n");
return;
}
