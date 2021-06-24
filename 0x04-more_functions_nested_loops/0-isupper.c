#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - Check if paramter c represents an uppercase letter.
 * @c: Int representing a character
 * Return: Always 0.
 */
int _isupper(int c)
{
	if ( c > 64 && c < 91)
	{
		return(1);
	}
	else 
	{
		return(0);
	}
}
