#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of args
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	opt_t print[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_list ap;
	int i, j;
	char *sep = "";

	va_start(ap, format);
	i = 0;
	while (format[i])
	{
		j = 0;
		while (print[j].opt)
		{
			if (print[j].opt == format[i])
			{
				printf("%s", sep);
				print[j].meth(ap);
				sep = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(ap);
	printf("\n");
}

/**
 * print_char - prints char
 * @ap: params
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - prints int
 * @ap: params
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - prints float
 * @ap: params
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - prints string
 * @ap: params
 */
void print_string(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);
	if (s != NULL)
	printf("%s", s);
	return;
}
