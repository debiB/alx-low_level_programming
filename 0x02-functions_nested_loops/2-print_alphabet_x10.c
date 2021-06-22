#include "holberton.h"
/**
 * print_alphabet_x10 - print entire alphabet on 10 lines
 *
 * Return: Void.
 */

void print_alphabet_x10(void)
{
	int i;
	char character;

	for (i = 0; i < 10; i++)
	{
	for (character = 'a'; character <= 'z'; character++)
	{
		_putchar(character);
	}
	_putchar('\n');
	}
}
