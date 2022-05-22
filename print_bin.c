#include "main.h"

/**
 * print_bin - prints decimal in binary
 * @arg: string
 * @len: index for buffer pointer
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
