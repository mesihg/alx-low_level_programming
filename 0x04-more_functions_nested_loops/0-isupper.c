#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks if a character is in uppercase
 * @c: character input to be checked for uppercase
 * Return: return 1 or 0 based on its character
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
