#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabet x10
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char d;
	int x;




	for (x = 1; x <= 10; x++)
	{
		for (d = 'a'; d <= 'z'; d++)
		{
		_putchar(d);

		}
		_putchar('\n');

	}

}
