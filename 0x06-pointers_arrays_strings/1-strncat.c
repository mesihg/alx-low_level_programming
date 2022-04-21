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
int i;
i = 0;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i[ = src[i];
}

while (i < n)
{
dest[i++] = '\0';       
}
return (dest);
}
