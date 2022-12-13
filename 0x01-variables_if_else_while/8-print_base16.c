#include <stdio.h>

/**
 * main - prints the number base 16
 * Return: Always 0
 */

int main(void)
{
	int num;
	char c;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	putchar('\n');

	return (0);
}
