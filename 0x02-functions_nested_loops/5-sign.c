#include "main.h"
/**
 * print_sign - function checks for a sign of a number
 * @n: int used for function argument
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('_');
	return (-1);
	}
	else
	{
	-putchar('0');
	return (0);
	}
}
