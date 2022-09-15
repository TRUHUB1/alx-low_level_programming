#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print numbers followed by a new line
 * Return: nothing
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}
