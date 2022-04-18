#include "main.h"

/**
 * _strlen - a function that returns len of a string
 * @s: a pointer for char s
 *
 * Return: returns the length of the given input
 */

int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
