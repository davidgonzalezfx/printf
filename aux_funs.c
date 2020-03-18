#include "holberton.h"
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
	char *str2 = str;

	if (!num)
		return (buff[*buff_size] = '0', *buff_size += 1, buff);
	for (; *str; str++)
	{
		buff[*buff_size] = *str;
		*buff_size += 1;
	}
	free(str2);
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
	unsigned int num = va_arg(vars, unsigned int);
	char *str = _itoa(num, 10);
	char *str2 = str;

	if (!num)
		return (buff[*buff_size] = '0', *buff_size += 1, buff);
	for (; *str; str++)
	{
		buff[*buff_size] = *str;
		*buff_size += 1;
	}
	free(str2);
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
	char *str2 = str;

	if (!num)
		return (buff[*buff_size] = '0', *buff_size += 1, buff);
	for (; *str; str++)
	{
		buff[*buff_size] = *str;
		*buff_size += 1;
	}
	free(str2);
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
	unsigned int num = va_arg(vars, unsigned int);
	char *str = _itoa(num, 16);
	char *str2 = str;

	if (!num)
		return (buff[*buff_size] = '0', *buff_size += 1, buff);
	for (; *str; str++)
	{
		buff[*buff_size] = *str;
		*buff_size += 1;
	}
	free(str2);
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
	unsigned int num = va_arg(vars, unsigned int);
	char *str = string_toupper(_itoa(num, 16));
	char *str2 = str;

	if (!num)
		return (buff[*buff_size] = '0', *buff_size += 1, buff);
	for (; *str; str++)
	{
		buff[*buff_size] = *str;
		*buff_size += 1;
	}
	free(str2);
	return (buff);
}
