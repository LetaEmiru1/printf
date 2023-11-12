#include "main.h"

/**
 * printString - prints a string.
 * @argumentList: argument.
 * Return: the length of the string.
 */
int printString(va_list argumentList)
{
	char *str;
	int i, length;

	str = va_arg(argumentList, char *);

	if (str == NULL)
	{
		str = "(null)";

		length = 0;
	}
	else
	{
		length = 0;
		while (str[length] != '\0')
			length++;

		for (i = 0; i < length; i++)
			_putchar(str[i]);

		return (length);
	}
}
