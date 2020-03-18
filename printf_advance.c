#include "holberton.h"
#include <stdio.h>
/**
 * print_p - print pointers
 * @vars: argument variable
 * @buff: buffer
 * @buff_size: buffer curso
 * Return: buffer modified
 */
char *print_p(va_list vars, char *buff, int *buff_size)
{
	long int num = va_arg(vars, long int);
	char *str = adress(num, 16);
	char *str2 = str;

	buff[*buff_size] = '0', *buff_size += 1;
	buff[*buff_size] = 'x', *buff_size += 1;
	for (; *str; str++)
		buff[*buff_size] = *str, *buff_size += 1;
	free(str2);
	return (buff);
}
/**
 * print_r - print pointers
 * @vars: argument variable
 * @buff: buffer
 * @buff_size: buffer curso
 * Return: buffer modified
 */
char *print_r(va_list vars, char *buff, int *buff_size)
{
	char *str = va_arg(vars, char *);
	int end = 0;

	if (!str)
		str = "(null)";
	for (; *(str + end) != '\0'; end++)
	{};

	for (end--; *(str + end); end--)
		buff[*buff_size] = *(str + end), *buff_size += 1;
	return (buff);
}
/**
 * print_rot13 - print pointers
 * @vars: argument variable
 * @buff: buffer
 * @buff_size: buffer curso
 * Return: buffer modified
 */
char *print_rot13(va_list vars, char *buff, int *buff_size)
{
	int i, j;
	char *str = va_arg(vars, char *);
	char *str2 = malloc(64);
	char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; *(str + i) != '\0'; i++)
		for (j = 0; j < 52; j++)
			if (str[i] == alp[j])
			{
				*(str2 + i) = rot[j];
				break;
			}
			else
				*(str2 + i) = *(str + i);
	for (i = 0; *(str2 + i); i++)
		buff[*buff_size] = *(str2 + i), *buff_size += 1;
	free(str2);
	return (buff);
}
/**
 * print_S - string with non printable chars
 * @vars: char to be added
 * @buff: buffer
 * @buff_size: index of buffer
 * Return: char * - buffer
 */
char *print_S(va_list vars, char *buff, int *buff_size)
{
	char *str = va_arg(vars, char *);
	char *tmp;

	if (!str)
		str = "(null)";
	for (; *str; str++)
	{
		if (*str < 32 || *str >= 127)
		{
			buff[*buff_size] = '\\', *buff_size += 1;
			buff[*buff_size] = 'x', *buff_size += 1;
			if (*str < 16)
				buff[*buff_size] = '0', *buff_size += 1;
			tmp = string_toupper(_itoa(*str, 16));
			buff[*buff_size] = *tmp;
			*buff_size += 1;
			free(tmp);
		}
		else
			buff[*buff_size] = *str, *buff_size += 1;
	}
	return (buff);
}
