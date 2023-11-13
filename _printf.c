#include "main.h"
/**
 * _printf - is the main function of custom printf.
 * @format: data.
 * Return: string length.
 */
int _printf(const char * const format, ...)
{
	converter m[] = {
		{"%s", print_string}, {"%c", print_char},
		{"%%", print_percent},
		{"%i", print_integer}, {"%d", printf_dec}, {"%r", print_sreverse},
		{"%R", print_rotate13}, {"%b", print_binary}, {"%u", print_unsigned},
		{"%o", print_octal}, {"%x", print_hexadec}, {"%X", print_HEXA},
		{"%S", print_ex_string}, {"%p", print_pointer}
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
