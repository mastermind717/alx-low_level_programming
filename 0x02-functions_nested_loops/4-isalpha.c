#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character.
 * @c: letter c
 * Return: returns 1 or 0 if success if c is a letter
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
