#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: input string one
 * @s2: input string two
 *
 * Return: returns concatenated string
 */

char *str_concat(char *s1, char *s2)
{
char *st = NULL;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
st = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
if (st == NULL)
	return (NULL);
if (st != NULL)
{
st[0] = 0;
strcat(st, s1);
strcat(st, s2);
}
free(st);
return (st);
}
