#include "main.h"

/**
 * print_str - prints a string
 * @arg: string
 * @len: index for buffer pointer
 * Return: number of chars printed.
 */

int print_str(va_list arg, unsigned int len)
{
	char *s = va_arg(arg, char *);

	if (!s)
		s = "(null)";
	len = _strlen(s);
	write(1, s, len);
	return (len);
}

/**
 * print_char - prints a character
 * @arg: string
 * @len: index for buffer pointer
 * Return: number of chars printed.
 */

int print_char(va_list arg, unsigned int len)
{
	char *s = va_arg(arg, char *);

	if (!s)
		s = "(null)";
	len = _strlen(s);
	write(1, s, len);
	return (len);
}

/**
 * print_prt - prints a percentage sign
 * @arg: string
 * @len: index for buffer pointer
 * Return: number of chars printed.
 */


int print_prt(va_list arg, unsigned int len)
{
	char *s = va_arg(arg, char *);

	len = _strlen(s);
	write(1, s, len);
	return (len);
}

