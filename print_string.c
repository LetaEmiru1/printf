#include "main.h"
/**
 * print_string - print a string.
 * @iterator: va_list variable.
 * Return: string len.
 */

int print_string(va_list iterator)
{
	char *s;
	int i, len;

	s = va_arg(iterator, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}
