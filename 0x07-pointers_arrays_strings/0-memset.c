#include "main.h"
/**
 * _memset - fill memory with a constant byte
 * @s: a pointer input
 * @b: a replacement char for @s
 * @n: indicates how many size of bytes to replace in @s with @b
 */

char *_memset(char *s, char b, unsigned int n)
{
int i;
unsigned char *a = b;

i = 0;

while (n > 0)
{
*a = b;
a++;
n--;
}
return (s);
}
