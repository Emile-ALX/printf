#include "main.h"

/**
 * print_bin - prints decimal in binary
 * @arg: array of arguments
 * Return: number of chars printed.
 */

int print_bin(va_list arg)
{
	char *tmp;
	int len;

	tmp = malloc(sizeof(char) * 50);
	if (tmp != NULL)
		_itoa(va_arg(arg, int), tmp, 2);

	len = _puts(tmp);
	free(tmp);

	return (len);
}

/**
 * print_bin - prints decimal in hexadecimal
 * @arg: array of arguments
 * Return: number of chars printed.
 */
int print_hex(va_list arg)
{
	unsigned int h = va_arg(arg, unsigned int);
	char *str = convert(h, 16, 1);

	return (_puts(str));
}

/**
 * @print_big_hex - prints decimal in hexadecimal
 * string in uppercase
 * @arg: array of arguments
 * Return: number of chars printed.
 */

int print_big_hex(va_list arg)
{
	unsigned int h = va_arg(arg, unsigned int);
	char *str = convert(h, 16, 0);

	return (_puts(str));
}