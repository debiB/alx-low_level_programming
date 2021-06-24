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
	
	for (length = 0; length <= size; length++)
	{
		for(width = 0; width <= size; size++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
