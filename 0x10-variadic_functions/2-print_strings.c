#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
* print_strings - Prints it's parameters strings.
* @separator: Is the string to be printed between numbers.
* @n: Constant variable
* Return: All parameters printed strings.
**/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *ptr;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
	ptr = va_arg(ap, char *);
	if (ptr == NULL)
	printf("(nil)");
	else
	printf("%s", ptr);
	if (i < (n - 1) && separator != NULL)
	printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
