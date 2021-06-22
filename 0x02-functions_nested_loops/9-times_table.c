#include "holberton.h"
/**
 * times_table - Print 9 times table
 *
 * Return: Void.
 */

void times_table(void)
{
	int x, y, multiplied_value;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 10; x++)
		{
			multiplied_value = x * y;
			_putchar(multiplied_value + '0');
			 _putchar(',');
			  _putchar(' ');
		}
	_putchar('\n');
	}
}
