#include "printf.h"
#include <stdlib.h>
/**
 * print_c - add char to buffer
 * @vars: char to be added
 * @buff: buffer
 * @buff_size: index of buffer
 * Return: char * - buffer
 */
char *print_c(va_list vars, char *buff, int *buff_size)
{
	char tmp = (char)va_arg(vars, int);

	buff[*buff_size] = tmp;
	*buff_size += 1;
	return (buff);
}
/**
 * print_str - add string to buffer
 * @vars: char to be added
 * @buff: buffer
 * @buff_size: index of buffer
 * Return: char * - buffer
 */
char *print_str(va_list vars, char *buff, int *buff_size)
{
	char *str = va_arg(vars, char *);

	for (; *str; str++)
	{
		buff[*buff_size] = *str;
		*buff_size += 1;
	}
	return (buff);
}
