#include "main.h"
/**
 * _isupper: checks if a character is in uppercase
 * @c: character input to be checked for uppercase
 * Return: return 1 or 0 based on its character
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
_putchar("\n");
}
