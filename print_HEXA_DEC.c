#include "main.h"

/**
 * print_HEXA_DEC - prints an hexadecimal number.
 * @num: number.
 * Return: counter.
 */
int print_HEXA_DEC(unsigned int num)
{
	int i;
	int *hex_array;
	int counter = 0;
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
			hex_array[i] = hex_array[i] + 7;
		_putchar(hex_array[i] + '0');
	}
	free(hex_array);
	return (counter);
}
