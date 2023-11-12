#ifndef MAIN_H
#define MAIN_H

typedef struct format
{
	char *specifier;
	int (*handlerFunction)();
} conversionSpecifier;

int _printf(const char *format, ...);
int _putchar(char c)
int printCharacter(va_list argumentList);
int printString(va_list argumentList);
print_percentage(void);
int printInteger(va_list args);
int printDecimal(va_list args);
#include <stdarg.h>
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

#endif
