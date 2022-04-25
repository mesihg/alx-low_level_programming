#include "main.h"
/**
 * _memset - fill memory with a constant byte
 * @s: a pointer to the string
 * @b: a value to be filled
 * @n: number of bytes to be filled starting from s
 */

char *_memset(char *s, char b, unsigned int n)
{
int i;
char *a = s;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
