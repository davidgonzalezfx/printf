#include "holberton.h"
/**
 * hand - array of filters
 * Return: filter *
 */
filter *hand()
{
	filter *hand = malloc(sizeof(filter) * 4);

	hand[0].c = 'c', hand[0].f = print_c, hand[1].c = 's', hand[1].f = print_str;
	hand[2].c = 'i', hand[2].f = print_d, hand[3].c = 'd', hand[3].f = print_d;

	return (hand);
}

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
/**
 * print_d - print digits base 10
 * @vars: char to be added
 * @buff: buffer
 * @buff_size: index of buffer
 * Return: char * - buffer
 */
char *print_d(va_list vars, char *buff, int *buff_size)
{
	int num = va_arg(vars, int);

	if (num < 0)
	{
		num *= -1;
		buff[*buff_size] = '-';
		*buff_size += 1;
	}
	char *str = _itoa(num, 10);
	char *str2 = str;

	for (; *str; str++)
	{
		buff[*buff_size] = *str;
		*buff_size += 1;
	}
	free(str2);
	return (buff);
}
/**
 * print_b - print digits in base 2
 * @vars: argument from list
 * @buff: buffer
 * @buff_size: pointer to the position of buffer in malloc
 * Return: char ponter
 */
char *print_b(va_list vars, char *buff, int *buff_size)
{
	int num = va_arg(vars, int);
	char *str = _itoa(num, 2);

	for (; *str; str++)
	{
		buff[*buff_size] = *str;
		*buff_size += 1;
	}
	return (buff);
}
/**
 * print_u - prints unsigned integers
 * @vars: argument from list
 * @buff: buffer
 * @buff_size: pointer to the position of buffer in malloc
 * Return: char ponter
 */
char *print_u(va_list vars, char *buff, int *buff_size)
{
	int num = va_arg(vars, int);
	if (num < 0)
		num = 4294967175 - num;
	char *str = _itoa(num, 10);

	for (; *str; str++)
	{
		buff[*buff_size] = *str;
		*buff_size += 1;
	}
	return (buff);
}
/**
 * print_o - print digits in octal baes
 * @vars: argument from list
 * @buff: buffer
 * @buff_size: pointer to the position of buffer in malloc
 * Return: char ponter
 */
char *print_o(va_list vars, char *buff, int *buff_size)
{
	int num = va_arg(vars, int);
	char *str = _itoa(num, 8);

	for (; *str; str++)
	{
		buff[*buff_size] = *str;
		*buff_size += 1;
	}
	return (buff);
}
/**
 * print_x - print digits in hexadecimla base
 * @vars: argument from list
 * @buff: buffer
 * @buff_size: pointer to the position of buffer in malloc
 * Return: char ponter
 */
char *print_x(va_list vars, char *buff, int *buff_size)
{
	int num = va_arg(vars, int);
	char *str = _itoa(num, 16);

	for (; *str; str++)
	{
		buff[*buff_size] = *str;
		*buff_size += 1;
	}
	return (buff);
}
/**
 * print_X - print digits in hecadecimal uppercase base
 * @vars: argument from list
 * @buff: buffer
 * @buff_size: pointer to the position of buffer in malloc
 * Return: char ponter
 */
char *print_X(va_list vars, char *buff, int *buff_size)
{
	int num = va_arg(vars, int);
	char *str = string_toupper(_itoa(num, 16));

	for (; *str; str++)
	{
		buff[*buff_size] = *str;
		*buff_size += 1;
	}
	return (buff);
}
