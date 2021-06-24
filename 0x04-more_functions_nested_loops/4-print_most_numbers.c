#include "holberton.h"
#include <stdio.h>

/**
 * print_most_numbers - Print numbers between 0 to 9 incl.
 *
 * Return: Void.
 */
void print_most_numbers(void)
{
	char i;
	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 54)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
