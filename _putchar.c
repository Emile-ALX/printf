#include "main.h"

/**
 * _putchar - writes the character c to stdout
 *
 * @c: The character to print
 * Return: On success 1, on error -1
 */

int _putchar(int c)
{
    return (write(1, &c, 1));
}

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 * Return: number of chars written
 */
int _puts(char *str)
{
    register int i;

    for (i = 0; str[i] != '\0'; i++)
        _putchar(str[i]);
    return (i);
}