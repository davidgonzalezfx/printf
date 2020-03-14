#include "printf.h"
/**
 * print_buff - print buffer
 * @buff: buffer
 * @size: length
 */
void print_buff(char *buff, int size)
{
	write(1, buff, size);
	write(1, "\n", 1);
	free(buff);
}
