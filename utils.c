#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, to the buffer dest.
 * @dest: buffer
 * @str: pointed to string
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *str)
{
	int i;

	for (i = 0; i >= 0; i++)
	{
		*(dest + i) = *(str + i);
		if (*(str + i) == '\0')
			break;
	}
	return (dest);
}

/**
 * _strlen - gets length of a string
 * @s: string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

/**
 * rev_string - Reverse string
 * @s: string to reverse
 * Return: Always nothing
 */

void rev_string(char *s)
{
	int count = 0, i, j;
	char *str, temp;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	str = s;

	for (i = 0; i < (count - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}

/**
 * _itoa - convert integer to string
 * @n: integer to convert
 * @strout: string
 * @base: conversion base
 * Return: converted string
 */

char *_itoa(int n, char *strout, int base)
{
	int sign = 0, rem;
	int i = 0;
	char *str = strout;

	if (n == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}

	if (n < 0 && base == 10)
	{
		sign = 1;
		n *= -1;
	}

	while (n)
	{
		rem = n % base;
		str[i++] = (rem > 9) ? (rem - 10) + 'A' : rem + '0';
		n = n / base;
	}

	if (sign)
	{
		str[i++] = '-';
	}

	str[i] = '\0';

	rev_string(strout);

	return (strout);
}
