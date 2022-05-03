#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments
 * @ac: number of arguments
 * @av: a pointer input
 *
 * Return: concatenated string
 */

char *argstostr(int ac, char **av)
{
if (ac == 0 || av == NULL)
	return (NULL);
char *ptr;
int i, j, size, index;
size = ac;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
	size++;
}

ptr = malloc(sizeof(char) * size + 1);

if (ptr == NULL)
	return (NULL);
index = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
	ptr[index++] = av[i][j];
ptr[index++] = '\n';
}
ptr[size] = '\0';
return (ptr);
}
