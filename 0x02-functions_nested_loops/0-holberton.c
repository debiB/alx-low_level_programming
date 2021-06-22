#include "holberton.h"

/**
 * main - Entry point for writing entire lowercase alphabet except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hol[8]='Holberton';
	int i;
	
	for(i=0; i<9; i++)
	{
		 
		_putchar(hol[i]);
	}
	_putchar('\n');

	return(0);
}

