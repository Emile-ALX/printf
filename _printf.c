#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _printf - Produces output according to format
 * @format: a character string
 * ...: variable arguments
 * Return: The number of arguments printed
 */

int _printf(char *format, ...)
{
	unsigned int i, j;
	va_list arg;
	char *buf;
	int (*pr_func)(va_list, unsigned int);

	va_start(arg, format);
	buf = malloc(sizeof(char) * 1024);
	j = 0;
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			pr_func = get_print_func(format, i);
			j += pr_func(arg, j);
		}
		else
		{
			buf[j] = format[i];
			putchar(buf[j]);
			j++;
		}
		i++;
	}
	va_end(arg);
	free(buf);

	return (j);
}
