#include "main.h"
/**
 * print_ex_string - prints exclusive string.
 * @iterator: argumen t.
 * Return: the length of the string.
 */

int print_ex_string(va_list iterator)
{
	char *s;
	int i, length = 0;
	int cast;

	s = va_arg(iterator, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			cast = s[i];
			if (cast < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + print_HEXA_DEC(cast);
		}
		else
		{
			_putchar(s[i]);
			length++;
		}
	}
	return (length);
}
