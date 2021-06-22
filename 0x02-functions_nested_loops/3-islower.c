#include "holberton.h"
/**
 * _islower - checks if letter is lowercase
 * @c: integer from which to check whether references a lowercase letter or not
 * Return: Void.
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
}
