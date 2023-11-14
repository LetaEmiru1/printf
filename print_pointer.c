#include "main.h"

/**
 * print_pointer - prints a pointer.
 * @iterator: args.
 * Return: counters.
 */
int print_pointer(va_list iterator)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	p = va_arg(iterator, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = print_hexa_dec(a);
	return (b + 2);
}
