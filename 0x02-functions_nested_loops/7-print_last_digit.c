#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: integer n
 * Return: Always o if true
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	if (x < 0)
		x = -x;
	_putchar(x + '0');
	return (x);
}
