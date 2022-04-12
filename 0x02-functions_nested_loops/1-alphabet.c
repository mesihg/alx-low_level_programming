#include "main.h"

/*
 * prints the alphabet in lower case followed by a new line.
 */
void print_alphabet(void)
{
for (char letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar("\n");
}
