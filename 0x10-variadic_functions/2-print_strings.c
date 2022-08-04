#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: separator
 * @n: num of params
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *ptr;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(ap, char *);
		printf("%s", ptr ? ptr : NIL);
		if (!separator || i == n - 1)
			continue;

		printf("%s", separator);
	}

	va_end(ap);
	printf("\n");
}
