#include "main.h"

/**
 * strncat - concatenates two strings at most n times
 * @dest: a pointer for input char dest
 * @src: a pointer for input char src
 * @n: input how many bytes from src to be concatenated
 *
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;

while (*(dest + i) != '\0')
{
i++;
}

j = 0;
while (j < n)
{
*(dest + i) = *(src + j);
if (*(src + j) == '\0')
{
break;
}
i++;
j++;
}
return (dest);
}
