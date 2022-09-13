#include "main.h"
/**
 * jack_bauer - print minutes of  24 hours
 *  n from 00:00 to 23:59,
 *  Return: 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_remainder;
	int mins_remainder;

	while (hours <= 23)
	{
	while (minutes <= 59)
	{
	mins_remainder = minutes % 10;
	hours_remainder = hours % 10;
	_putchar(hours / 10 + '0');
	_putchar(':');
	_putchar(minutes / 10 + '0');
	_putchar(mins_remainder + '0');
	minutes++;
	_putchar('\n');
	}
	hours++;
	minutes = 0;
#include "main.h"
/**
* jack_bauer -> prints 24 hours
*/
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
			{
				_putchar('0');
				_putchar(i + '0');
			}
			else if (i >= 10)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			if (j < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(j + '0');
			}
			else if (j >= 10)
			{
				_putchar(':');
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
			_putchar('\n');
		}

	}
}

