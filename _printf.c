#include "main.h"

/**
 *write_to_stdout- writes characters or strings to stdout
 *@data: character or string to be written
 *@is_char: indicator flag
 *Return: number of characters written
 */

int write_to_stdout(const char *data, int is_char)
{
	int length = 0;

	if (is_char)
	{
		return (write(1, data, 1));
	}
	else
	{
		while (data[length] != '\0')
			length++;
		return (write(1, data, legth));
	}
}
/**
 *write_int- writes integer to the stdout
 *@i: the integer to e printed
 *Return: number of characters written
 */

int write_int (int i)
{
	char buffer[15];

	int length = snprintf(buffer, sizeof(buffer), "%d", i);

	return (write(1, buffer, length));
}
/**
 * _printf - custom printf function
 * @format: pointer to the first argument.
 * Return: count (the number of characters printed to stdout)
 */

int _printf(const char *format, ...)
{
	va_list iterator;

	int count = 0;

	va_start(iterator, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')

				count += write_to_stdout(va_arg(iterator, const char*), 1);
			else if (*format == 's')
				count += write_to_stdout(va_arg(iterator, const char*), 0);
			else if (*format == 'i' || *format == 'd')
				count += write_int(va_arg(iterator, int));
			else if (*format == '%')
				count += write_to_stdout('%', 0);
		}
		else
		{
		count += write_to_stdout(format, 1);
		}

		format++;
	}
	va_end(iterator);

	return (count);
}
