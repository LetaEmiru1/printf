#include "main.h"
/**
 * _strlen - Returns the lenght of a string.
 * @s: pointer to a character.
 * Return: c.
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);

}
/**
 * _strlenc - Strlen function for constant char pointer s
 * @s: pointer
 * Return: c
 */
int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
