#include "main.h"

/**
 * print_char - prints a character.
 * @iterator: argument.
 * Return: 1.
 */
int print_char(va_list iterator)
{
	char str;

	str = va_arg(iterator, int);
	_putchar(str);
	return (1);
}
