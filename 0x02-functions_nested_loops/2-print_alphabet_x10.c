#include "main.h"

/**
 * print_alphabet_x10 - print a b c 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char c, i;

	for (i = 0; i <= 10; c++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
