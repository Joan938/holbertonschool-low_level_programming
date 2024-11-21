#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything.
 * @format: The format string containing types of the arguments.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;

	va_start(args, format);
	while (format && format[i])  /* Iterate over the format string */
	{
		if (i > 0)
			printf(", ");  /* Print a separator between the arguments */

		if (format[i] == 'c')  /* If the format specifier is 'c' */
			printf("%c", va_arg(args, int));  /* char is promoted to int */
		else if (format[i] == 'i')  /* If the format specifier is 'i' */
			printf("%d", va_arg(args, int));  /* integer */
		else if (format[i] == 'f')  /* If the format specifier is 'f' */
			printf("%f", va_arg(args, double));  /* float is promoted to double */
		else if (format[i] == 's')  /* If the format specifier is 's' */
		{
			str = va_arg(args, char *);  /* string */
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
		i++;
	}
	va_end(args);

	printf("\n");  /* Print a new line at the end */
}

