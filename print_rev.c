#include "main.h"


/**
 * print_rev - reverse and print string
 * @arg: string
 * Return: Number of characters printed
 */

int print_rev(va_list arg)
{
	char *s = va_arg(arg, char *);

	if (!s)
		s = "(null)";
	rev_string(s);
	return (_puts(s));
}


/**
 * print_rot13 - encodes and prints string in rot13
 * @arg: string
 * Return: Numbe of characters printed
 */

int print_rot13(va_list arg)
{
	char *s = va_arg(arg, char *);
	int i, j;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";


	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (*(s + i) == alphabet[j])
			{
				*(s + i) = rot13[j];
				break;
			}
		}
	}

	return (_puts(s));
}
