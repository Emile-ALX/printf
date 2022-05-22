#include "main.h"

/**
 * get_print_func - get the correct function to perform
 * print operation
 * @s: specified format
 * @index: index for format identifier
 * Return: pointer to function
 */

int (*get_print_func(char *s, unsigned int index))(va_list arg, unsigned int)
{
	fmt_t pr[] = {
		{"d", print_int},
		{"i", print_int},
		{"c", print_char},
		{"s", print_str},
		{"u", print_uint},
		{"b", print_bin},
		{"%", print_prt},
	};
	int flags = 7;
	int i;

	for (i = 0; i < flags; i++)
	{
		if (*(pr[i]).fmt == s[index])
			return (pr[i].f);
	}
	return (NULL);
}
