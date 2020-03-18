#include "holberton.h"
/**
 * print_buff - print buffer
 * @buff: buffer
 * @size: length
 */
void print_buff(char *buff, int size)
{
	buff[size] = '\0';
	write(1, buff, size);
	free(buff);
}
