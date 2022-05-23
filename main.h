#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct _fmt - Struct _fmt
 *
 * @fmt: The format
 * @f: The function associated
 */

typedef struct _fmt
{
	char *fmt;
	int (*f)(va_list);
} fmt_t;

int _printf(char *format, ...);
char *_itoa(int n, char *strout, int base);
void rev_string(char *s);
char *_strcpy(char *dest, char *str);
int _strlen(char *s);
char *convert(unsigned long int n, int base, int lowercase);
int _putchar(int c);
int _puts(char *s);
int (*get_print_func(char s))(va_list);
int print_prt(va_list arg);
int print_str(va_list arg);
int print_int(va_list arg);
int print_hex(va_list arg);
int print_big_hex(va_list arg);
int print_oct(va_list arg);
int print_char(va_list arg);
int print_uint(va_list arg);
int print_addr(va_list arg);
int print_bin(va_list arg);

#endif
