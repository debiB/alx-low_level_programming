#include <stdio.h>

/**
* main - Print combinations of two digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int thousands, tens, ones;

	for (thousands = 0; thousands <= 9; thousands++)
	{
		for (tens = thousands + 1; tens <= 9; tens++)
		{
			 for (ones = tens + 1; ones <= 9; ones++)
			 {
			 	putchar(thousands + '0');
			 	putchar(tens + '0');
			 	putchar(ones + '0');

				if (thousands < 7)
				{
					putchar(',');
					putchar(' ');
				}
			 }
		}
	}

	putchar('\n');

	return (0);
}
