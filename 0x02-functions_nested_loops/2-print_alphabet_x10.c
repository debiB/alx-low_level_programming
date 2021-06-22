#include "holberton.h"
#include "string.h"
/**
 * print_alphabet - print entire alphabet
 *
 * Return: Void.
 */

void print_alphabet_x10(void)
{
	int i;
	char charachter;

	for(i=0; i< 10; i++)
	{
	for(charachter='a'; charachter <= 'z'; charachter++)
	{
			_putchar(charachter);
	}		
	_putchar('\n');
	}
}
