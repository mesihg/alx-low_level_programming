#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: a pointer for input type char s1
 * @s2: a pointer for input type char s2
 *
 * Return: return comparison of the two strings
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}

if (*s1 == *s2)
{
return (0);
}

return *s1 - *s2;
}
