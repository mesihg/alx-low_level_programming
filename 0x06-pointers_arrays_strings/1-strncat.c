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
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
