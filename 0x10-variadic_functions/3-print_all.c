#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of argument types
 */
void print_all(const char *const format, ...)
{
	va_list list;
	unsigned int i = 0, j, k = 0;
	char *str;
	const char op_arg[] = "cifs";
	va_start(list, format);
	
	while (format && format[i])
		{
			j = 0;
			while (op_arg[j])
				{
					if (format[i] == op_arg[j] & k)
						{
							printf(", ");
							break;
							
						}
					j++;

					
				}

			switch (format[i])
				{
				    case 'c':
					    printf("%c", va_arg(list, int));
					    k = 1;
					    break;
			            case 'i':
					    printf("%d", va_arg(list, int));
					    k = 1;
					    break;
			            case 'f':
					    printf("%f", va_arg(list, double));
					    k = 1;
					    break;
		                    case 's':
					    str = va_arg(list, char *);
					    k = 1;
					    if (str == NULL)
						    {
							    printf("(nil)");
							    break;	    
						    }
					    printf("%s", str);
					    break;
					    
				}
			i++;
			
		}
	printf("\n");
	va_end(valist);

	
}
