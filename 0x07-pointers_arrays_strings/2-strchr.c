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
unsigned int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
break;
}
}
if (s[i] == c)
{
 return (s);
}
else 
{
return ('\0');
}
}
