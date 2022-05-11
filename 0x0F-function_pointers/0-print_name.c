/**
 * print_name - prints a name
 * @name: a pointer for name
 * @f: a pointer function
 *
 * Return: returns nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
