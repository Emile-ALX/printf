#include "main.h"


/**
 * print_int - prints an integer
 * @arg: string
 * @len: index for buffer pointer
 * Return: number of chars printed.
 */

int print_int(va_list arg, unsigned int len)
{
	char *tmp;

	tmp = malloc(sizeof(char) * 20);
	if (tmp != NULL)
		_itoa(va_arg(arg, int), tmp, 10);
	len = _strlen(tmp);
	write(1, tmp, len);
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

int print_uint(va_list arg, unsigned int len)
{
	unsigned int u = va_arg(arg, unsigned int);
	char *str = convert(u, 10, 0);

	len = _strlen(str);
	write(1, str, len);

	return (len);
}

