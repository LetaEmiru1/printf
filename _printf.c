#include "main.h"

/**
 * _printf - a function that selects the appropriate function to print based on the format specifier.
 * @format: format string containing specifiers.
 * Return: the length of the printed string.
 */
int _printf(const char *format, ...)
{
	 conversionSpecifier specifiers[] = {
	{"%s", print_string}, {"%i", print_integers},
	{"%d", print_integers}, {"%b", print_binary}};

	va_list args;
	int i = 0, j, length = 0;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (specifiers[j].ph[0] == format[i] && specifiers[j].ph[1] == format[i + 1])
				{
					length += specifiers[j].function(args);
					i += 2;
					goto LoopEnd;
				}
				j++;
		}

		_putchar(format[i]);

		length++;
		i++;
	}

LoopEnd:

	va_end(args);

	return (length);
}
