#include "holberton.h"
#include <stdio.h>

/**
 * print_square - Print square line dependent on the integer n.
 * @n : The number of lines using '#' characters to use per row and column
 * Return: Void.
 */
void print_square(int n)
{
	int length, width;
	
	for (length = 0; length < n; length++)
	{
		for(width = 0; width < n; size++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n < 0)
	{
		_putchar('\n');
	}
}
