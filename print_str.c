#include "main.h"

/**
 * print_str - prints a string
 * @arg: string
 * Return: number of chars printed.
 */

int print_str(va_list arg)
{
	char *s = va_arg(arg, char *);

	if (!s)
		s = "(null)";

	return (_puts(s));
}

/**
 * print_char - prints a character
 * @arg: string
 * Return: number of chars printed.
 */

int print_char(va_list arg)
{
	char s = va_arg(arg, int);

	return (_putchar(s));
}

/**
 * print_prt - prints a percentage sign
 * @arg: string
 * @len: index for buffer pointer
 * Return: number of chars printed.
 */

int print_prt(va_list arg)
{
	char s = va_arg(arg, int);

	return (_putchar(s));
}
