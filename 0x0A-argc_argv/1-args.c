#include <stdio.h>

/**
 * main - entry point
 * @argc: number of argumenets
 * @argv: array of pointers
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
