#include "printf.h"


int main(void)
{
	char test = '0';
	char test2 = '1';
	char *str1 = "Hola ";
	char *str2 = " mundo ";
	char *str3 = " end";
	_printf("-> %s%c%s%c%s <-", str1, test, str2, test2, str3);
	return (0);
}
