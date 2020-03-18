#include "holberton.h"
/**
 * hand - array of filters
 * Return: filter *
 */
filter *hand()
{
	filter *hand = malloc(sizeof(filter) * 15);

	if (!hand)
		return (NULL);
	hand[0].c = 'c', hand[0].f = print_c, hand[1].c = 's', hand[1].f = print_str;
	hand[2].c = 'i', hand[2].f = print_d, hand[3].c = 'd', hand[3].f = print_d;
	hand[4].c = 'b', hand[4].f = print_b, hand[5].c = 'u', hand[5].f = print_u;
	hand[6].c = 'o', hand[6].f = print_o, hand[7].c = 'x', hand[7].f = print_x;
	hand[8].c = 'X', hand[8].f = print_X, hand[9].c = '%', hand[9].f = pr;
	hand[10].c = 'p', hand[10].f = print_p;
	hand[11].c = 'r', hand[11].f = print_r;
	hand[12].c = 'R', hand[12].f = print_rot13;
	hand[13].c = 'S', hand[13].f = print_S;
	hand[14].c = '\0', hand[14].f = NULL;

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

	if (!str)
		str = "(null)";
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
	char *str, *str2;

	if (!num)
		return (buff[*buff_size] = '0', *buff_size += 1, buff);
	if (num < 0)
	{
		num *= -1;
		buff[*buff_size] = '-';
		*buff_size += 1;
	}
	str = _itoa(num, 10);
	str2 = str;

	for (; *str; str++)
	{
		buff[*buff_size] = *str;
		*buff_size += 1;
	}
	free(str2);
	return (buff);
}
/**
 * pr - print digits in hecadecimal uppercase base
 * @vars: argument from list
 * @buff: buffer
 * @buff_size: pointer to the position of buffer in malloc
 * Return: char ponter
 */
char *pr(__attribute__((unused)) va_list vars, char *buff, int *buff_size)
{
	buff[*buff_size] = '%';
	*buff_size += 1;
	return (buff);
}
