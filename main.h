#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct _fmt - Struct _fmt
 *
 * @fmt: The format
 * @f: The function associated
 */

typedef struct _fmt
{
	char *fmt;
	int (*f)(va_list, char *, unsigned int)
} fmt_t;

int _printf(const char *format, ...);
char *_itoa(int n, char *strout, int base);
void rev_string(char *s);
char *_strcpy(char *dest, char *str);
int _strlen(char *s);
char *convert(unsigned long int n, int base, int lowercase);
int (*get_print_func(char *s, int index))(va_list, unsigned int);
int print_prt(va_list arg, unsigned int len);
int print_str(va_list arg, unsigned int len);
int print_int(va_list arg, unsigned int len);
int print_hex(va_list arg, unsigned int len);
int print_big_hex(va_list arg, unsigned int len);
int print_oct(va_list arg, unsigned int len);
int print_char(va_list arg, unsigned int len);
int print_uint(va_list arg, unsigned int len);
int print_addr(va_list arg, unsigned int len);
int print_bin(va_list arg, unsigned int len);



#endif
