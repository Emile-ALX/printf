#include "main.h"


/**
 * print_rev - reverse and print string
 * @arg: string
 * Return: Number of characters printed
 */

int print_rev(va_list arg)
{
	int i, j;
	char *s = va_arg(arg, char *);

	if (!s)
		s = "(null)";
	for (i = 0; s[i]; i++)
		;
	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	return (i);
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
		if (s[i] < 'A' || (s[i] > 'Z' && s[i] < 'a') || s[i] > 'z')
			_putchar(s[i]);
		else
		{
			for (j = 0; j < 52; j++)
			{
				if (*(s + i) == alphabet[j])
					_putchar(rot13[j]);
			}
		}
	}

	return (i);
}
