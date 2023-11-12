#include "main.h"

/**
 *print_binary- prints binary to the standard output
 *@iterator: va_list type variable
 *Return: binary
 */

int printBinary(va_list value)
{
	int flag = 0;
	int count = 0;
	int i, mask = 1, digit;
	unsigned int number = va_arg(value, unsigned int);
	unsigned int bit;

	for (i = 0; i < 32; i++)
	{
		bit = ((mask << (31 - i)) & number);

		if (bit >> (31 - i))
		flag = 1;

		if (flag)
		{
			digit = bit >> (31 - i);
			_putchar(digit + '0');
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
