#include "main.h"

/**
 * print_addr - prints an address
 * @arg: string
 * Return: number of chars printed.
 */

int print_addr(va_list arg)
{
	char *s;
	unsigned long int n = va_arg(arg, unsigned long int);
	int i;

	if (!n)
		return (_puts("(nil)"));
	s = convert(n, 16, 1)
	    i += _puts("0x");
	i += _puts(s);

	return (i);
}