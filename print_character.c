#include "main.h"
/**
 * printCharacter - outputs a character.
 * @argumentList: list of arguments.
 * Return: an integer.
 */

int printCharacter(va_list argumentList)
{
	char character;

	character = va_arg(argumentList, int);

	_putchar(character);
	return (1);
}
