#include "holberton.h"
/**
 * rev_string - reverse_string
 * Description: Tool for convert int to string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int init, end;
	char aux;

	for (end = 0; *(s + end) != '\0'; end++)
	{};
	end--;
	for (init = 0; init < end; init++)
	{
		aux = *(s + init);
		*(s + init) = *(s + end);
		*(s + end--) = aux;
	}
}

/**
 * string_toupper - check the code for Holberton School students.
 * @s: char
 * Return: Char.
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}
	return (s);
}
/**
 * _calloc - allocates memory for an array
 * @nmemb: # elements
 * @size: size of elements
 * Return: void, just allocate memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int index = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	for (; index < (nmemb * size); index++)
		*(mem + index) = 0;
	return (mem);
}
/**
 * _itoa - convert num to base and return in string
 * @num: int
 * @base: int
 * Return: string
 */
char *_itoa(unsigned int num, int base)
{
	char *tool = "0123456789abcdef";
	char *new = _calloc(64, 1), *init;

	if (!new)
		return (NULL);
	init = new;
	while (num != 0)
	{
		*new++ = tool[num % base];
		num /= base;
	}
	rev_string(init);
	return (init);
}
/**
 * adress - _itoa for pointers
 * @num: int
 * @base: int
 * Return: string
 */
char *adress(long int num, int base)
{
	char *tool = "0123456789abcdef";
	char *new = _calloc(64, 1), *init;

	if (!new)
		return (NULL);
	init = new;
	while (num != 0)
	{
		*new++ = tool[num % base];
		num /= base;
	}
	rev_string(init);
	return (init);
}
