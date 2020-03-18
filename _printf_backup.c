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

	if (!format)
		return (-1);
	buff = malloc(2048);
	if (!buff)
		return (-1);
	va_start(vars, format);

	for (; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; handler[j].c; j++)
			{
				char tmp = format[i + 1];

				if (tmp == handler[j].c)
				{
					buff = handler[j].f(vars, buff, size), i++;
					break;
				}
				else if (!handler[j + 1].c && tmp != '%')
				{
					buff[*size] = '%';
					*size += 1;
				}
				else if (tmp == '\0')
					return (free(buff), free(handler), va_end(vars), -1);
			}
		}
		else
			buff[buff_size++] = format[i];
	}
	return (print_buff(buff, buff_size), free(handler), va_end(vars), buff_size);
}
