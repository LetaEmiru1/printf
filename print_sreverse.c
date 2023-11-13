#include "main.h"

/**
 * printf_sreverse - function that prints a str in reverse
 * @iterator: va_list variable 
 *
 * Return: the string
 */
int print_sreverse(va_list iterator)
{

	char *s = va_arg(iterator, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
