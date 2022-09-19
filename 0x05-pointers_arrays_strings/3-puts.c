#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line
 *
 * @str: the variable pointer at str
 *
 */

void _puts(char *str)
{
int i = 0;

while (*(str + i) != '\0')
{
putchar(*(str + i));
i++;
}
putchar('\n');
}
