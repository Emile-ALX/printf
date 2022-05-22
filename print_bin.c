#include "main.h"

/**
 * print_bin - prints decimal in binary
 * @arg: string
 * @len: index for buffer pointer
 * Return: number of chars printed.
 */

int print_bin(va_list arg, unsigned int len)
{
	char *tmp;

	tmp = malloc(sizeof(char) * 50);
	if (tmp != NULL)
		_itoa(va_arg(arg, int), tmp, 2);
	len = _strlen(tmp);
	write(1, tmp, len);
	free(tmp);

	return (len);
}
