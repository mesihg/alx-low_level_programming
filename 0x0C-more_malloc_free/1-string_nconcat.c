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
	char *ptr;
	unsigned int sz1 = 0, sz2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[sz1] != '\0')
	{
		sz1++;
	}

	while (s2[sz2] != '\0')
	{
		sz2++;
	}

	if (n > sz2)
	n = sz2;
	ptr = malloc((sz1 + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (0);

	for (i = 0; i < sz1; i++)
	{
		ptr[i] = s1[i];
	}

	for (; i < (sz1 + n); i++)
	{
		ptr[i] = s2[i - sz1];
	}
	ptr[i] = '\0';
free(ptr);
return (ptr);
}
