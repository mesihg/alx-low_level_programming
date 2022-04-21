#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: a pointer for char dest
 * @src: a pointer for char src
 *
 * Return: combined/concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		dest++;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
