#include "main.h"
/**
 * print_alphabet)x10 - prints alphabets in lowercase 10 times
 */
void print_alphabet_x10(void)
{
    int letter;
    int count;

    for (count = 0; count < 10; count++)
    {
            for (letter = 'a'; letter <= 'z'; letter++)
		    _putchar(letter);
	    _putchar('\n');
    }

}
