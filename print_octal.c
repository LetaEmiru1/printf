#include "main.h"

/**
 * print_octal - prints an octal number.
 * @iterator: arguments.
 * Return: counter.
 */
int print_octal(va_list iterator)
{
	int i;

	int *octal_array;

	int counter = 0;

	unsigned int num = va_arg(iterator, unsigned int);

	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;
	octal_array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		octal_array[i] = temp % 8;
		temp /= 8;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(octal_array[i] + '0');
	}
	free(octal_array);
	return (counter);
}
