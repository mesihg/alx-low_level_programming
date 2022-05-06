#include "main.h"

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
	unsigned int i, len, j;
	unsigned int size;

	len = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len] != '\0')
		len++;
	size = (len + n) * sizeof(*ptr);
	ptr = malloc(size + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < size && s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < size && s2[j] != '\0')
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
