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
unsigned int i, j, k;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

while (s1[i] != '\0')
	i++;
while (s2[j] != '\0')
	j++;

if (n > j)
}
