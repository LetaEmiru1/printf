#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} converter;

int print_pointer(va_list val);
int print_hexa_dec(unsigned long int num);
int print_HEXA_DEC(unsigned int num);
int print_ex_string(va_list val);
int print_HEXA(va_list val);
int print_hexadec(va_list val);
int print_octal(va_list val);
int print_unsigned(va_list args);
int print_binary(va_list val);
int print_sreverse(va_list args);
int print_rotate13(va_list args);
int print_integer(va_list args);
int printf_dec(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int print_percent(void);
int print_char(va_list val);
int print_string(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
