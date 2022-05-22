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
	unsigned int i;
	va_list arg;
	char *buf;
	int (*pr_func)(va_list);
	char *fmt;

	va_start(arg, format);
	buf = malloc(sizeof(char) * 1024);
	i = 0;
	for (fmt = format; *fmt; fmt++)
	{
		if (*fmt == '%')
		{
			fmt++;
			pr_func = get_print_func(*fmt);
			if (pr_func != NULL)
			{
				i += pr_func(arg);
			}
			else
			{
				i += write(1, "Invalid conversion", 18);
			}
		}
		else
		{
			i += _putchar(*fmt);
		}
	}
	free(buf);
	va_end(arg);
	return (i);
}
