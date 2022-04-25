#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: a pointer to the string
 * @b: a value to be filled
 * @n: number of bytes to be filled starting from s
 *
 * Return: returns value of @s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
