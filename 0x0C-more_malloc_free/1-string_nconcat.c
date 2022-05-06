#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: a pointer for string input one
 * @s2: a pointer for string input two
 * @n: number of bytes to concatenate
 *
 * Return: return concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = 0, l2 = 0;
	while (*(s1 + l1))
		l1++;
	while (*(s2 + l2))
		l2++;

	if (n < l2)
		l2 = n;

	ptr = malloc(sizeof(char) * (l1 + l2 + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		*(ptr + i) = *(s1 + i);

	for (i = 0, j = l1; i < l2; j++, i++)
		*(ptr + j) = *(s2 + i);

	*(ptr + j) = '\0';
	
        free(ptr);
	
	return (ptr);
}
