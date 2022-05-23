#include "main.h"

/**
 * print_int - prints an integer
 * @arg: string
 * @len: index for buffer pointer
 * Return: number of chars printed.
 */

int print_int(va_list arg)
{
	char *tmp;
	int len;

	tmp = malloc(sizeof(char) * 20);
	if (tmp != NULL)
		_itoa(va_arg(arg, int), tmp, 10);
	len = _puts(tmp);
	free(tmp);

	return (len);
}

/**
 * print_uint - prints an unsigned integer
 * @arg: va_list of arguments from _printf
 * @len: buffer index
 *
 * Return: number of char printed
 */

int print_uint(va_list arg)
{
	unsigned int u = va_arg(arg, unsigned int);
	char *str = convert(u, 10, 0);

	return (_puts(str));
}

/**
 * print_oct - prints an octal integer
 *
 * @arg: va_list of arguments from _printf
 * Return: length of string printed
 */

int print_oct(va_list arg)
{
	unsigned int o = va_arg(arg, unsigned int);
	char *str = convert(o, 8, 0);

	return (_puts(str));
}