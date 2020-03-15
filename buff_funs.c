#include "holberton.h"
/**
 * print_buff - print buffer
 * @buff: buffer
 * @size: length
 */
void print_buff(char *buff, int size)
{
	write(1, buff, size);
	free(buff);
}
