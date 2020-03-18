#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_c - function that prints anything.
 * @list: struct
 * Return: void.
 */

void print_c(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_i - function that prints anything.
 * @list: struct
 * Return: void.
 */
void print_i(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_f - function that prints anything.
 * @list: struct
 * Return: void.
 */
void print_f(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * print_s - function that prints anything.
 * @list: struct
 * Return: void.
 */
void print_s(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (!s)
		s = "(nil)";
	printf("%s", s);
}
/**
 * print_all - function that prints anything.
 * @format: struct
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	op_t ops[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
				};
	int i, j;
	char *separator = "";

	va_list list;

	va_start(list, format);
	i = 0;
	while (format && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(ops[j]).op)
				{
				printf("%s", separator);
				ops[j].f(list);
				}
			separator = ", ";
		j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}

