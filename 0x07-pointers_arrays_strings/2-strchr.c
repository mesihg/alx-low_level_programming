#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: a pointer for string
 * @c: character to be searched for
 *
 * Return: return first occurrence of the character in the string @s
 */

char *_strchr(char *s, char c)
{
while (*s != c && *s != '\0')
{
s++;
}
if (*s == c)
{
return s;
}
else 
{
return NULL;
}
}
