#include "main.h"

/**
 * _strpbrk - search a string for the given string
 * @s: a pointer for a string to be scanned
 * @accept: a pointer for a string to be searched
 *
 * Return: returns the matched string
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0') /*Declaring WHILE*/
	{
		j = 0;
		while (accept[j] != '\0')  /*Evaluating *accept*/
		{
			if (*s == accept[j])
			{
				return (s);
			}

			j++; /*add j+1*/
		}

		s++; /*add s+1*/
	}
	return (0);

}
