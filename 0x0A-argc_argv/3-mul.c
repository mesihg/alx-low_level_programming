#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of pointers
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int n, result;
if (argc >= 3)
{
result = atoi(argv[1]) * atoi(argv[2]);
printf("%i\n", result);
n = 0;
}
else
{
printf("%s\n", "Error");
n = 1;
}
return (n);
}
