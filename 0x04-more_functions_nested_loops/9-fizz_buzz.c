#include "holberton.h"
#include <stdio.h>

/**
 * main - Fizz for multiples of 3 and Buzz for multiples of 5 FizzBuzz for both
 *
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
                {
                        printf("Buzz");
                }
		else if (i % 5 == 0 && i % 3 == 0)
                {
                        printf("FizzBuzz");
                }
		else
		{
			printf("%d",i);
		}
		if(i != 100)
		{
		_putchar('\n');
		}
	}
	_putchar('\n');
	return(0);
}
