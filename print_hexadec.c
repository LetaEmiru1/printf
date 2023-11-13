#include "main.h"

/**
 * print_hexadec - prints an hexadecimal number.
 * @val: arg
 * Return: counter.
 */
int print_hexadec(va_list iterator)
{
	int i;
	int *hex_array;
	int counter = 0;
	unsigned int num = va_arg(iterator, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	hex_array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		hex_array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (hex_array[i] > 9)
			hex_array[i] = hex_array[i] + 39;
		_putchar(hex_array[i] + '0');
	}
	free(hex_array);
	return (counter);
}
