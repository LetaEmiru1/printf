#include "main.h"

/**
 * print_binary - prints a binary number.
 * @val: argument.
 * Return: 1.
 */
int print_binary(va_list val)
{
	int checker = 0;
	int count = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
			checker = 1;
		if (checker)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
