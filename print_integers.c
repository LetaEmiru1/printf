#include "main.h"

/**
 * printInteger - prints an integer.
 * @args: argument to print.
 * Return: the number of characters printed.
 */
int printInteger(va_list args)
{
	int number = va_arg(args, int);

	int temp, lastDigit = number % 10, digit, magnitude = 1;

	int count = 1;

	number = number / 10;

	temp = number;

	if (lastDigit < 0)
	{
		_putchar('-');
		temp = -temp;
		number = -number;
		lastDigit = -lastDigit;
		count++;
	}

	if (temp > 0)
	{
		while (temp / 10 != 0)
		{
			magnitude = magnitude * 10;
			temp = temp / 10;
		}

		temp = number;

		while (magnitude > 0)
		{
			digit = temp / magnitude;
			_putchar(digit + '0');
			temp = temp - (digit * magnitude);
			magnitude = magnitude / 10;
			count++;
		}
	}

	_putchar(lastDigit + '0');

	return (count);
}

/**
 * printDecimal - prints a decimal number.
 * @args: argument to print.
 * Return: the number of characters printed.
 */

int printDecimal(va_list args)
{
	int number = va_arg(args, int);
	int temp, lastDigit = number % 10, digit;
	int count = 1;
	int magnitude = 1;

	number = number / 10;
	temp = number;

	if (lastDigit < 0)
	{
        	_putchar('-');
        	temp = -temp;
        	number = -number;
        	lastDigit = -lastDigit;
        	count++;
	}

	if (temp > 0)
	{
        	while (temp / 10 != 0)
        	{
			magnitude = magnitude * 10;
			temp = temp / 10;
        	}

        temp = number;

        while (magnitude > 0)
        	{
			digit = temp / magnitude;
			_putchar(digit + '0');
			temp = temp - (digit * magnitude);
			magnitude = magnitude / 10;
			count++;
        	}
 	}

	_putchar(lastDigit + '0');

	return (count);
}
