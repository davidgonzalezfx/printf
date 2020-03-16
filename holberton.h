#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
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

int _printf(const char *format, ...);

char *print_c(va_list vars, char *buff, int *buff_size);
char *print_str(va_list vars, char *buff, int *buff_size);

char *print_d(va_list vars, char *buff, int *buff_size);

char *print_b(va_list vars, char *buff, int *buff_size);
char *print_u(va_list vars, char *buff, int *buff_size);
char *print_o(va_list vars, char *buff, int *buff_size);
char *print_x(va_list vars, char *buff, int *buff_size);
char *print_X(va_list vars, char *buff, int *buff_size);

void print_buff(char *, int);
filter *hand();
void rev_string(char *s);
char *_itoa(int num, int base);
char *string_toupper(char *s);

#endif
