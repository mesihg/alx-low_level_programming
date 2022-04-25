#include "main.h"

/**
 * _memcpy - copies from src to dest
 * @dest: a pointer for the destination
 * @src: a pointer for the src
 * @n: number of bytes to be copied from src to dest
 *
 * Return: returns value of @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}	
return (dest);
}
