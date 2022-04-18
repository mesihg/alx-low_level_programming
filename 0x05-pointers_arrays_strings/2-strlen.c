#include "main.h"

/**
 * _strlen - a function that returns len of a string
 * @s: a pointer for char s
 *
 * Return: returns the length of the given input
 */

int _strlne(char *s)
{
int u;
u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}
