#include "main.h"

/**
 * get_print_func - get the correct function to perform
 * print operation
 * @s: specified format
 * Return: pointer to function
 */

int (*get_print_func(char s))(va_list arg)
{
	fmt_t pr[] = {
		{"d", print_int},
		{"i", print_int},
		{"c", print_char},
		{"s", print_str},
		{"u", print_uint},
		{"b", print_bin},
		{"%", print_prt},
		{"o", print_oct},
		{"x", print_hex},
		{"X", print_big_hex},
	};
	int flags = 10;
	int i;

	for (i = 0; i < flags; i++)
	{
		if (*(pr[i]).fmt == s)
			return (pr[i].f);
	}
	return (NULL);
}
