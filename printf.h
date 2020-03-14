#ifndef PRINTF_H
#define PRINTF_H

#include "stdarg.h"
#include "stdlib.h"
#include "stdio.h"
#include <unistd.h>

/**
 * struct funs - functions
 * @c: char
 * @f: funs
 */
typedef struct funs
{
	char c;
	char *(*f)();
} filter;

int _printf(const char *const format, ...);

char *print_c(va_list vars, char *buff, int *buff_size);
char *print_str(va_list vars, char *buff, int *buff_size);

char *print_d(va_list vars, char *buff, int *buff_size);

void print_buff(char *, int);

#endif
