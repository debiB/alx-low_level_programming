#include "holberton.h"

/**
* print_times_table - Prints the n times table
*
* @n: number times table (0 < n <= 15)
*
* Return: no return
*/
void print_times_table(int n)
{
	int i, j, mult;
	if(n>=0 && n<= 15)
	{
		for(i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mult = i*j;
				if (x == 0)
				{
				_putchar(multiplied_value + '0');
				}
				else if (multiplied_value >= 10)
				{
				_putchar(' ');
				_putchar(multiplied_value / 10 + '0');
				_putchar(multiplied_value % 10 + '0');
				}
				else
				{
				_putchar(' ');
				_putchar(' ');
				_putchar(multiplied_value + '0');
				}
				if (x != (n*n))
				{
				_putchar(',');
				}
			}

		_putchar('\n');
		}
	}
}
