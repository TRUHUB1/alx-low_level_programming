#include "main.h"

/**
 * print_alphabet_x10 - print a b c 10 times
 */

void print_alphabet_x10(void)
{
	int c;
       	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
