#include "holberton.h"
/**
 * _printf - clone of printf native function
 * @format: string
 * Return: #chars printed
 */
int _printf(const char *format, ...)
{
	va_list vars;
	char *buff;
	filter *handler = hand();
	int i = 0, j = 0, buff_size = 0, *size = &buff_size;

	buff = malloc(2048);
	if (!buff)
		return (000);
	va_start(vars, format);
	for (; format && format[i]; i++)
	{
		if (format[i] == '%')
			for (j = 0; handler[j].c; j++)
			{
				if (format[i + 1] == handler[j].c)
					buff = handler[j].f(vars, buff, size), i++;
				else if (!handler[j + 1].c)
				{
					return (-1);
				}
			}
		else
			buff[buff_size++] = format[i];
	}
	return (print_buff(buff, buff_size), free(handler), va_end(vars), buff_size);
}
