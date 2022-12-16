#include "main.h"

/**
 * main - check if char is lowercase
 * @c: is the char to be checked
 * Return: 1 if hchar is lowercase, othewise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
