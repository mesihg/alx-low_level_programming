#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: a pointer for name
 * @f: a pointer function
 *
 * Return: returns nothing
 */

void print_name(cahr *name, void (*f)(char *))
{

if (name)
	f(name);
}
