#include "main.h"

/**
 * print_hexa_dec - prints an hexadecimal number.
 * @num: arg.
 * Return: counter.
 */
int print_hexa_dec(unsigned long int num)
{
	long int i;

	long int *hex_array;

	long int counter = 0;

	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;

	hex_array = malloc(counter * sizeof(long int));

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
