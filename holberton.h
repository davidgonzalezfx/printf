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
struct funs
{
	char c;
	char *(*f)();
};

typedef struct funs filter;
int _printf(const char *format, ...);

char *print_c(va_list vars, char *buff, int *buff_size);
char *print_str(va_list vars, char *buff, int *buff_size);
char *print_d(va_list vars, char *buff, int *buff_size);

char *print_b(va_list vars, char *buff, int *buff_size);
char *print_u(va_list vars, char *buff, int *buff_size);
char *print_o(va_list vars, char *buff, int *buff_size);
char *print_x(va_list vars, char *buff, int *buff_size);
char *print_X(va_list vars, char *buff, int *buff_size);
char *pr(__attribute__((unused)) va_list vars, char *buff, int *buff_size);

char *print_p(va_list vars, char *buff, int *buff_size);
char *print_r(va_list vars, char *buff, int *buff_size);
char *print_rot13(va_list vars, char *buff, int *buff_size);
char *print_S(va_list vars, char *buff, int *buff_size);

void print_buff(char *, int);
filter *hand();
void rev_string(char *s);
void *_calloc(unsigned int nmemb, unsigned int size);
char *_itoa(unsigned int num, int base);
char *adress(long int num, int base);
char *string_toupper(char *s);

#endif
