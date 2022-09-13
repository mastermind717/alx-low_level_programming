#include "main.h"

/**
 * _islower - will check lowercase characters
 * @c: checks the character
 * Return: 0 if in uppercase, 1 if in lowercase
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
		else
	{
		return (0);
	}
	_putchar('\n');

}
